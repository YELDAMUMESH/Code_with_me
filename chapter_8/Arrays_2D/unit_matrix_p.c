#include<stdio.h>
#include<stdlib.h>

void unit(int* p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            p[i*c+j]=p[i*c+j]/p[i*c+j];
        }
    }
    return;
}

void display(int* p,int r,int c)
{
    printf("\n");
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

void scan(int* p,int r,int c)
{
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
    int *s=(int*)malloc((r*c)*(sizeof(int)));
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
    printf("Enter the array elements in %d X %d format: \n",r,c);
    scan(p,r,c);
    printf("\nThe array is: ");
    display(p,r,c);
    unit(p,r,c);
    printf("\nConverted to unit matrix: ");
    display(p,r,c);
    free(p);
    p=NULL;


    return 0;
}