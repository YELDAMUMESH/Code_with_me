#include<stdio.h>

void general(int array[100][100],int rows,int columns)
{
    int i,j;
    printf("Array elements are: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int rows,columns;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&rows,&columns);

    if (rows <= 0 || columns <= 0) {
        printf("Invalid dimensions for the array.\n");
        return 1;
    }
    int array[rows][columns]; 

    printf("Enter the array elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    general(array, rows, columns);


return 0;
}
