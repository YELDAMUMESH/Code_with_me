#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // finding max sum of col
    int max=0,index=0;
    for(int j=0;j<c;j++)
    {
        int sum=0;
            for(int i=0;i<r;i++)
            {
                sum+=a[i][j];
            }
            if(sum>max)
            {
                max=sum;
                index=j;
            }
    }
    printf("\nMax sum of column is %d at column %d\n",max,index+1);


return 0;
}