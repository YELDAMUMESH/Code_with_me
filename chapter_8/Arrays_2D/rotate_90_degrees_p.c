#include <stdio.h>
#include <stdlib.h>

void reverse(int *p, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0, k = c - 1; j < k; j++, k--)
        {
            int temp = *(p + (i * c) + j);
            *(p + (i * c) + j) = *(p + (i * c) + k);
            *(p + (i * c) + k) = temp;
        }
    }
}

void transpose_in_place(int *p, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = *(p + (i * c) + j);
            *(p + (i * c) + j) = *(p + (j * c) + i);
            *(p + (j * c) + i) = temp;
        }
    }
}

int* transpose_new(int *p, int r, int c)
{
    int *new_mat = (int *)malloc(r * c * sizeof(int));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(new_mat + (j * r) + i) = *(p + (i * c) + j);
        }
    }
    return new_mat;
}

void display(int *p, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(p + (i * c) + j));
        }
        printf("\n");
    }
}

void input(int *p, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", p + (i * c) + j);
        }
    }
}

int* memory(int r, int c)
{
    return (int *)calloc((r * c), sizeof(int));
}

int main()
{
    int r, c, *p;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    p = memory(r, c);
    if (p == NULL)
    {
        printf("Memory allocation failed.\n");
        return EXIT_FAILURE;
    }

    printf("Enter the matrix of order %d x %d:\n", r, c);
    input(p, r, c);

    printf("The matrix is:\n");
    display(p, r, c);

    if (r == c)
    {
        printf("Step 1: Transposing in place...\n");
        transpose_in_place(p, r, c);
        printf("After transpose:\n");
        display(p, r, c);

        printf("Step 2: Reversing rows...\n");
        reverse(p, r, c);
        printf("Final matrix:\n");
        display(p, r, c);
    }
    else
    {
        printf("Matrix is not square — using new memory for transpose.\n");

        int *t = transpose_new(p, r, c);
        if (t == NULL)
        {
            printf("Transpose memory allocation failed.\n");
            free(p);
            return EXIT_FAILURE;
        }

        printf("Transposed matrix is:\n");
        display(t, c, r); // note: dimensions are flipped

        printf("Reversing rows of transposed matrix...\n");
        reverse(t, c, r);
        printf("Final matrix:\n");
        display(t, c, r);

        free(t);
        t = NULL;
    }

    free(p);
    p = NULL;

    return 0;
}
