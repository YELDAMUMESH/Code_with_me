#include<stdio.h>
#include<stdlib.h>

void add(int *p, int *q, int r, int c)
{
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum=*(p+(i*c)+j)+*(q+(i*c)+j);
            printf("%d ",sum);
        }
        printf("\n");
    }
}


void display(int *p,int r, int c)
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



void input(int* p, int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(p+(i*c)+j));
        }
    }
    return;
}



int *memory(int r,int c)
{
    int *s=(int*)calloc((r*c),sizeof(int));
    return s;
}


int main()
{
    int r1,r2,c1,c2,*p,*q;
    printf("Enter the number of rows in matrix 1: ");
    scanf("%d",&r1);
    printf("Enter the number of columns in matrix 1: ");
    scanf("%d",&c1);
    printf("Enter the number of rows in matrix 2: ");
    scanf("%d",&r2);
    printf("Enter the number of columns in matrix 2: ");
    scanf("%d",&c2);
    if(r1!=r2 || c1!=c2)
    {
        printf("Matrices can't be added.\n");
        return 0;
    }
    else
    {
        p=memory(r1,c1);
        q=memory(r2,c2);
        if(p==NULL || q==NULL)
        {
            printf("Memory allocation failed.\n");
            return EXIT_FAILURE;
        }
        printf("Enter the elements of matrix 1 in %d x %d :\n",r1,c1);
        input(p,r1,c1);
        printf("Enter the elements of matrix 2 in %d x %d :\n",r2,c2);
        input(q,r2,c2);
        printf("Matrix 1: \n");
        display(p,r1,c1);
        printf("Matrix 2: \n");
        display(q,r2,c2);
        printf("Sum of Matrix 1 and Matrix 2: \n");
        add(p,q,r1,c1);
        free(p);
        p=NULL;
        free(q);
        q=NULL;

    }


return 0;
}