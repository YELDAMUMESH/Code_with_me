/* 

Input           Output

1 2 3           1 4 7
4 5 6   ====>   8 5 2
7 8 9           3 6 9



*/

#include<stdio.h>
int main()
{

    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now printing array in wave form: \n");
    for(int j=0;j<c;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<r;i++)
            {
                printf("%d ",a[i][j]);
            }
        }
        else
        {
            for(int i=0,k=r-1;i<k;i++,k--)
            {
                int temp=a[i][j];
                a[i][j]=a[k][j];
                a[k][j]=temp;
            }
            for(int i=0;i<r;i++)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
return 0;
}