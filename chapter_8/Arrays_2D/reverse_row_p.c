#include<stdio.h>
#include<stdlib.h>

void reverse(int* p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0,k=c-1;j<k;j++,k--)
        {
            int temp=*(p+(i*c)+j);
            *(p+(i*c)+j)=*(p+(i*c)+k);
            *(p+(i*c)+k)=temp;
        }
    }
    return;

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
    reverse(p,r,c);
    printf("Reversed matrix is as follows: \n");
    display(p,r,c);
    free(p);
    p=NULL;
    

return 0;
}