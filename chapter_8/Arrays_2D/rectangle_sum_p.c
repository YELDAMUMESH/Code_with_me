#include<stdio.h>
#include<stdlib.h>

void Rectangle_sum(int *p,int r1,int c1,int r2,int c2,int c)
{
    int sum=0;
    for(int i=r1;i<=r2;i++)
    {
        for(int j=c1;j<=c2;j++)
        {
            sum+=*(p+(i*c)+j);
        }
    }
    printf("Sum of rectangle is %d\n",sum);
    return;

}

void display(int* p,int r1,int c1,int r2,int c2,int c)
{
    for(int i=r1;i<=r2;i++)
    {
        for(int j=c1;j<=c2;j++)
        {
            printf("%d ",*(p+i*c+j));
        }
        printf("\n");
    }
    return;
}

void input_matrix(int* p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",p+i*c+j);
        }
    }
    return;
}

int* dynamic_memory(int r,int c)
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
    p=dynamic_memory(r,c);
    if(p==NULL)
    {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    printf("Memory allocated successfully\n");
    printf("Enter the matrix (%d x %d)\n",r,c);
    input_matrix(p,r,c);
    int r1,c1,r2,c2;
    printf("Enter the starting co-ordinates of rectangle: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the ending co-ordinates of rectangle: ");
    scanf("%d%d",&r2,&c2);
    printf("The rectangle is: \n");
    display(p,r1,c1,r2,c2,c);
    Rectangle_sum(p,r1,c1,r2,c2,c);
    free(p);
    p=NULL;



return 0;
}