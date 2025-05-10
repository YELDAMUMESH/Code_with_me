// C Program for Search an element in a sorted and pivoted array


#include <stdio.h>
#include <stdlib.h>

// Searching element
void search(int *start, int n, int search)
{
    int m = n / 2, *p = start;
    int found = 0;

    if (search > *(p + m))
    {
        for (p = start + m; p < start + n; p++)
        {
            if (search == *p)
            {
                printf("Element found at index %ld\n", p - start);
                found = 1;
                break;
            }
        }
    }
    else if (search < *(p + m))
    {
        for (p = start + m; p >= start; p--)
        {
            if (search == *p)
            {
                printf("Element found at index %ld\n", p - start);
                found = 1;
                break;
            }
        }
    }
    else
    {
        printf("Element found at index %d\n", m);
        found = 1;
    }

    if (!found)
    {
        printf("Element not found\n");
    }
}

// Reverse elements using pointers only and bitwise XOR
void reverse(int *start, int *end)
{
    while (start < end)
    {
        if (start != end)
        {
            *start = *start ^ *end;
            *end = *start ^ *end;
            *start = *start ^ *end;
        }
        start++;
        end--;
    }
}

// Display the array using pointers
void display(int *arr, int n)
{
    for (int *p = arr; p < arr + n; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");
}

// Bubble sort using only pointers and bitwise swap
void bubble_sort(int *arr, int n)
{
    for (int *p = arr; p < arr + n - 1; p++)
    {
        for (int *q = arr; q < arr + n - (p - arr) - 1; q++)
        {
            if (*q > *(q + 1))
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
    for (int *p = arr; p < arr + n; p++)
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

    if (n <= 0)
    {
        printf("Invalid array size.\n");
        return EXIT_FAILURE;
    }

    // Allocate memory
    arr = allocate_memory(n);
    if (arr == NULL)
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
    // Reverse first 'steps' elements
    reverse(arr, arr + steps - 1);
    // Reverse the rest
    reverse(arr + steps, arr + n - 1);

    printf("Rotated array: ");
    display(arr, n);

    // Searching element
    int e;
    printf("Enter an element to search: ");
    scanf("%d", &e);

    search(arr, n, e);

    // Cleanup
    free(arr);
    arr = NULL;

    return 0;
}
