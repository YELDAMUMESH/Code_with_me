#include<stdio.h>
int main()
{

    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Transpose of the matrix is: \n");
    int b[c][r];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            b[i][j]=arr[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
return 0;
}