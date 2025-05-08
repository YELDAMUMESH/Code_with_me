#include <stdio.h>
#include <stdlib.h>

// Reverse elements using pointers only
void reverse(int *start, int *end)
{
    while(start < end)
    {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;
        start++;
        end--;
    }
}

// Display the array using pointers
void display(int *arr, int n)
{
    for(int *p = arr; p < arr + n; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
}

// Bubble sort using only pointers
void bubble_sort(int *arr, int n)
{
    for(int *p = arr; p < arr + n - 1; p++)
    {
        for(int *q = arr; q < arr + n - (p - arr) - 1; q++)
        {
            if(*q > *(q + 1))
            {
                *q = *q ^ *(q + 1);
                *(q + 1) = *q ^ *(q + 1);
                *q = *q ^ *(q + 1);
            }
        }
    }
}

// Input elements using pointers
void input(int *arr, int n)
{
    for(int *p = arr; p < arr + n; p++)
    {
        scanf("%d", p);
    }
}

// Allocate memory
int* allocate_memory(int n)
{
    return malloc(n * sizeof(int));
}

int main()
{
    int n, *arr;

    printf("Enter number of array elements: ");
    scanf("%d", &n);

    // Allocate memory
    arr = allocate_memory(n);
    if(arr == NULL)
    {
        printf("Memory allocation failed!!\n");
        return EXIT_FAILURE;
    }

    // Input elements
    printf("Enter %d array elements: ", n);
    input(arr, n);

    // Sort array
    printf("\nSorted array:\n");
    bubble_sort(arr, n);
    display(arr, n);

    // Rotation
    int steps;
    printf("\nEnter number of steps to rotate: ");
    scanf("%d", &steps);
    steps = steps % n; // Safe wraparound

    // Reverse entire array
    reverse(arr, arr + n - 1);
    printf("Step-1: Reverse entire array\n");
    display(arr,n);
    // Reverse first 'steps' elements
    reverse(arr, arr + steps - 1);
    printf("Step-2: Reverse first %d elements\n",steps);
    display(arr,n);
    // Reverse the rest
    reverse(arr + steps, arr + n - 1);
    
    printf("Reversing the rest of the array (n-steps):\n");
    display(arr, n);

    // Cleanup
    free(arr);
    arr = NULL;

    return 0;
}
