#include<stdio.h>
int main()
{

    int row_1,row_2,col_1,col_2;
    printf("Rows in the first matrix: ");
    scanf("%d",&row_1);
    printf("Columns in the first matrix: ");
    scanf("%d",&col_1);
    printf("Rows in the second matrix: ");
    scanf("%d",&row_2);
    printf("Columns in the second matrix: ");
    scanf("%d",&col_2);
    if(col_1!=col_2 || row_1!=row_2)
    {
        printf("Matrices can't be added.\n");
    }
    else
    {
        int matrix_1[row_1][col_1],matrix_2[row_2][col_2];
        printf("Enter the elements of the first matrix:\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                printf("matrix_1[%d][%d]= ",i,j);
                scanf("%d",&matrix_1[i][j]);
            }
        }
        printf("Enter the elements of the second matrix:\n");
        for(int i=0;i<row_2;i++)
        {
            for(int j=0;j<col_2;j++)
            {
                printf("matrix_2[%d][%d]= ",i,j);
                scanf("%d",&matrix_2[i][j]);
            }
        }
        printf("The first matrix is:\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                printf("%d ",matrix_1[i][j]);
            }
            printf("\n");
        }
        printf("The second matrix is:\n");
        for(int i=0;i<row_2;i++)
        {
            for(int j=0;j<col_2;j++)
            {
                printf("%d ",matrix_2[i][j]);
            }
            printf("\n");
        }
        printf("Sum of the matrix is :\n");
        for(int i=0;i<row_1;i++)
        {
            for(int j=0;j<col_1;j++)
            {
                printf("%d  ",matrix_1[i][j]+matrix_2[i][j]);
            }
            printf("\n");
        }
        
    }
return 0;
}