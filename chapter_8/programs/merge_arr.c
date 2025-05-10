//C Program for Merge an array of size n into another array of size m+n


#include <stdio.h>
#include <stdlib.h>

void display(int *r, int n);

void sorting(int *r, int n)
{
    int *p, *q;
    for (p = r; p < r + n - 1; p++)
    {
        for (q = p + 1; q < r + n; q++)
        {
            if (*p > *q)
            {
                *q = *p ^ *q;
                *p = *p ^ *q;
                *q = *p ^ *q;
            }
        }
    }
    printf("Sorted array: ");
    display(r, n);
}

void display(int *t, int n)
{
    for (int *q = t; q < t + n; q++)
    {
        printf("%d ", *q);
    }
    printf("\n");
}

void merge(int *r, int n, int *t, int total)
{
    int *p = r;
    int *q = t + (total - n);  // Start at end of original `t`

    while (p < r + n)
    {
        *q = *p;
        q++;
        p++;
    }

    printf("After merging both arrays: ");
    display(t, total);
}

void input(int *r, int n)
{
    for (int *p = r; p < r + n; p++)
    {
        scanf("%d", p);
    }
}

int* memory(int n)
{
    return (int *)malloc(n * sizeof(int));
}

int main()
{
    int n, m;
    printf("Enter number of elements in arrays A & B: ");
    scanf("%d %d", &n, &m);

    int *p = memory(n);
    int *q = memory(m);

    if (p == NULL || q == NULL)
    {
        printf("Memory allocation failed!!\n");
        return EXIT_FAILURE;
    }

    printf("Enter %d elements for array A: ", n);
    input(p, n);

    printf("Enter %d elements for array B: ", m);
    input(q, m);

    int *t = realloc(q, (n + m) * sizeof(int));
    if (t == NULL)
    {
        printf("Memory reallocation failed!!\n");
        free(p);
        return EXIT_FAILURE;
    }

    merge(p, n, t, n + m);
    sorting(t, n + m);

    free(p);
    // free(q);  // Do not free q, as it is now part of t
    free(t);  // Only free t
    return 0;
}