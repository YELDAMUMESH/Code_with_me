#include<stdio.h>
#include<stdlib.h>

int diagonal_sum(int *p,int r,int c)
{
    int sum=0;
    for(int i = 0; i < r; i++) {
        sum += *(p + i * c + i); // sums only row elements: p[0],p[4],p[8] for 3x3 matrix
    }
    
    return sum;
}


void diagonal_matrix(int* p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j)
            {
                p[i*c+j]=0;
            }
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
            printf("%d ",*(p+i*c+j));
        }
        printf("\n");
    }
    return;
}


void input(int* p,int r,int c)
{
    printf("Enter a matrix of order %d x %d :\n",r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(p+(i*c)+j));
        }
    }
    return;
}


int* memory(int r,int c)
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
    while(r!=c)
    {
        printf("Error! Only square matrices are allowed (rows == columns).\n");
        printf("Enter the number of rows & columns: ");
        scanf("%d %d",&r,&c);
    }
    p=memory(r,c);
    if(p==NULL)
    {
        printf("Memory allocation failed!!\n");
        return EXIT_FAILURE;
    }
    input(p,r,c);
    printf("Entered matrix is as follows: \n");
    display(p,r,c);
    diagonal_matrix(p,r,c);
    printf("Converted diagonal matrix is as follows : \n");
    display(p,r,c);
    int sum =diagonal_sum(p,r,c);
    printf("Sum of diagonal elements is : %d\n",sum);
    free(p);
    p=NULL;

return 0;
}