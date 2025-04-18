#include<stdio.h>
#include<stdlib.h>

void col_sum(int *p,int r,int c)
{
    int sum_max=0,index=0;
    for(int j=0;j<c;j++)
    {
        int sum=0;
        for(int i=0;i<r;i++)
        {
            sum+=*(p+i*c+j);
        }
        if(sum>sum_max)
        {
            sum_max=sum;
            index=j;
        }
    }
    printf("The column with the maximum sum is %d\n",index+1);
    printf("Maximum sum is %d\n",sum_max);

}


void display(int* p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",*(p+(i*c)+j));
        }
        printf("\n");
    }
    return;
}

void input(int* p, int r,int c)
{
    printf("Enter the elements of the matrix in (%d x %d): \n",r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",p+(i*c)+j);
        }
    }
    return;
}

int* memory(int r,int c)
{
    int *s=(int*)calloc((r*c),sizeof(int));
    return s;
}
int main()
{
    int r,c,*p;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    p=memory(r,c);
    if(p==NULL)
    {
        printf("Memory not allocated\n");
        return EXIT_FAILURE;
    }
    input(p,r,c);
    printf("Entered matrix is as follows: \n");
    display(p,r,c);
    col_sum(p,r,c);

return 0;
}