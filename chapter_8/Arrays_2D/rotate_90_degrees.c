#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    c=r;
    int a[r][c];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
   // Step -1 Transpose
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    // printing matrix
    printf("Transpose of the matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // Step-2 Reverse the row
    for(int i=0;i<r;i++)
    {
        for(int j=0,k=r-1;j<k;j++,k--)
        {
            int temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
        }
    }
    // printing matrix
    printf("Matrix after rotating 90 degree : \n");
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