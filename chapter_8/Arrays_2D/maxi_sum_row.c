#include<stdio.h>
int main()
{

    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max_sum=0,final_index_i=0;
    for(int i=0;i<r;i++)
    {
        int sum=0,index_i=0;
        for(int j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
            index_i=i;
        }
        if(sum>max_sum)
        {
            max_sum=sum;
            final_index_i=index_i;
        }
    }
    printf("The row with maximum sum is %d\n",final_index_i+1);
    printf("The maximum sum : %d\n",max_sum);

return 0;
}