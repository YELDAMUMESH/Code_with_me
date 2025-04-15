#include<stdio.h>
int main()
{

    int row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    int num,a[row][col];
    printf("Enter the number which will fill the complete matix: ");
    scanf("%d",&num);
    //Intializing array with num
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            a[i][j]=num;
        }
    }
    //Printing array in matrix form
    printf("Matix of %dX%d\n",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
return 0;
}