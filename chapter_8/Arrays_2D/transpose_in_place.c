#include<stdio.h>
int main()
{

    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    c=r;
    int a[r][c];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //Logic for transpose
    printf("Transpose of the matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


return 0;
}