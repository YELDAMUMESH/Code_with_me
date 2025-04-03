#include<stdio.h>

void reverse(int b[], int st, int en) 
{
    int *p, *q;
    
    for (p = b + st, q = b + en; p < q; p++, q--) 
    {
        int temp = *p;
        *p = *q;
        *q = temp;
    }
}

void display(int a[], int n)
{
    int *t;
    for (t = a; t < a + n; t++)
    {
        printf("%d ", *t);
    }
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]), k;

    printf("Size of array is: %d\n", n);
    printf("Original array: ");
    display(a, n);

    printf("Please enter number of steps: ");
    scanf("%d", &k);

    // Reduce unnecessary rotations
    if (k >= n)
    {
        k = k % n; 
    }

    printf("K value is %d \n", k);

    // Only rotate if necessary
    if (k > 0) 
    {
        reverse(a, 0, n - 1);
        reverse(a, 0, k - 1);
        reverse(a, k, n - 1);
    }

    printf("Rotated array: ");
    display(a, n);
    printf("\n");

    return 0;
}
