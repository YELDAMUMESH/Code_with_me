#include<stdio.h>
#include<stdlib.h>

void wave_form(int* p,int r,int c)
{
    for(int j=0;j<c;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<r;i++)
            {
                printf("%d ",*(p+(i*c)+j));
            }
        }
        else
        {
            for(int i=0,k=r-1;i<k;i++,k--)
            {
                int temp=*(p+(i*c)+j);
                *(p+(i*c)+j)=*(p+(k*c)+j);
                *(p+(k*c)+j)=temp;
            }
            for(int i=0;i<r;i++)
            {
                printf("%d ",*(p+(i*c)+j));
            }
        }
        printf("\n");
    }
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
}


void input(int* p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",p+(i*c)+j);
        }
    }
}


int *memory(int r,int c)
{
    int *s=(int*)malloc((r*c)*sizeof(int));
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
    printf("Enter the elements of the matrix(%d x %d): \n",r,c);
    input(p,r,c);
    printf("The matrix is:\n");
    display(p,r,c);
    printf("The wave from of the matrix is: \n");
    wave_form(p,r,c);
    free(p);
    p=NULL;

return 0;
}