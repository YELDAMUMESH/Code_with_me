#include<stdio.h>
#include<stdlib.h>

void find_max(int* p,int r,int c)
{
    int max_sum=0,max_index=0;
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=*(p+(i*c)+j);
        }
        if(sum>max_sum)
        {
            max_sum=sum;
            max_index=i;
        }
    }
    printf("Maximum sum is %d at index %d\n",max_sum,max_index+1);
}


void input(int* p,int r,int c)
{
    printf("Enter the elements of the matrix in (%d X %d) order:\n",r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",p+(i*c)+j);
        }
    }
    return;
}

int* memory_allocation(int r,int c)
{
    int *s;
    s=(int*)calloc((r*c),sizeof(int));
    return s;
}

int main()
{

    int r,c,*p,*q;
    printf("Enter the number of rows & columns: ");
    scanf("%d%d",&r,&c);
    p=memory_allocation(r,c);
    if(p==NULL)
    {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    input(p,r,c);
    find_max(p,r,c);
    free(p);
    p=NULL;
return 0;
}