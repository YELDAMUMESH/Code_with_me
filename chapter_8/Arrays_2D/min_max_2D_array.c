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
        printf("%d  ",a[i][j]);
    }
    printf("\n");
}
int min=a[0][0],max=a[0][0],index_min_i,index_min_j,index_max_i,index_max_j;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        if(a[i][j]<min)
        {
            min=a[i][j];
            index_min_i=i;
            index_min_j=j;

        }
        if(a[i][j]>max)
        {
            max=a[i][j];
            index_max_i=i;
            index_max_j=j;
        }
    }
}
printf("The maximum element in the matrix is:%d\n",max);
printf("Index of the maximum element : (%d,%d)\n",index_max_i,index_max_j);
printf("The minimum element in the matrix is:%d\n",min);
printf("Index of the minimum element : (%d,%d)\n",index_min_i,index_min_j);
return 0;
}