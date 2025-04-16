#include<stdio.h>
int main()
{
    int r1,r2,c1,c2;
    printf("Enter the number of rows in the first matrix: ");
    scanf("%d",&r1);
    printf("Enter the number of columns in the first matrix: ");
    scanf("%d",&c1);
    printf("Enter the number of rows in the second matrix: ");
    scanf("%d",&r2);
    printf("Enter the number of columns in the second matrix: ");
    scanf("%d",&c2);
    if(c1!=r2)
    {
        printf("Matrices can't be multiplied.");
    }
    else
    {
        int a[r1][c1],b[r2][c2];
        printf("Enter the elements of the first matrix:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix:\n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        int res[r1][c2];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                res[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }

            }
        }
        printf("The product of the two matrices is:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }


return 0;
}