#include<stdio.h>
int main()
{

    int row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    int num1,num2,a[row][col];
    printf("Enter 2 number which will fill the complete matix: ");
    scanf("%d %d",&num1,&num2);
    //Intializing array with num
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i == row - 1) {
                a[i][j] = num1;
            }
            else if(i == j) {
                a[i][j] = num1;
            }
            else if(j % 2 == 0) {
                a[i][j] = num1;
            }
            else {
                a[i][j] = num2;
            }
            
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
    int max_count=0,max_index=0;
    for(int i=0;i<row;i++)
    {
        int count=0,index=0;
        for(int j=0;j<col;j++)
        {
            if(a[i][j]==1)
            {
                count++;
                index=i;
            }
        }
        if(count>max_count)
        {
            max_count=count;
            max_index=index;
        }
    }
    printf("Max count of 1 is %d at row %d\n",max_count,max_index+1);
return 0;
}