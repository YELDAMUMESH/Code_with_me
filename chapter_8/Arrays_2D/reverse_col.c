#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Reverse columns in-place
    for(int i=0,k=r-1;i<k;i++,k--)
    {
        for(int j=0;j<c;j++)
        {
            int temp = a[i][j];
            a[i][j] = a[k][j];
            a[k][j] = temp;
        }

    }

    printf("Matrix after reversing columns:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
