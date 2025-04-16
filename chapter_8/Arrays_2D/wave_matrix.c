#include<stdio.h>
int main()
{

    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the array elements: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now printing the array in wave form: \n");
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        else
        {
            for(int j=0,k=c-1;j<k;j++,k--)
            {
                int temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
            }
            for(int j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
return 0;
}