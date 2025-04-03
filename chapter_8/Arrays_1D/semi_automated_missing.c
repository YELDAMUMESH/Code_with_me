#include <stdio.h>

int array_sum(int a[], int n)
{
    int arr_sum = 0, *q;
    for (q = a; q < a + n; q++)  // Fixed: Loop till `n`, not `n-1`
    {
        arr_sum += *q;
    }
    return arr_sum;
}

int total_sum_of_n(int n)
{
    return (n * (n + 1)) / 2;  // Optimized formula for sum of first `n` natural numbers
}

void display(int a[], int n)
{
    int *q;
    for (q = a; q < a + n; q++)
    {
        printf("%d ", *q);
    }
    printf("\n");
}

int main()
{
    int n, minus;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Please enter the number you want to remove: ");
    scanf("%d", &minus);
    
    int a[n - 1], i = 0, j = 1;  // Creating a new array without the missing number

    while (i < n - 1)
    {
        if (j != minus) // Skip the missing number
        {
            a[i] = j;
            i++;
        }
        j++;
    }

    printf("Array after removing %d: ", minus);
    display(a, n - 1);

    int sum_of_array = array_sum(a, n - 1);
    printf("\nSum of array elements: %d", sum_of_array);

    int total_n_sum = total_sum_of_n(n);
    printf("\nSum of array elements from 1 to %d = %d\n", n, total_n_sum);

    printf("Missing element = %d\n", total_n_sum - sum_of_array);
    
    return 0;
}
