#include<stdio.h>
#include<stdlib.h>

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


void input(int *p,int r,int c,int *num)
{
    printf("Please enter any number: ");
    scanf("%d",num);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            *(p+(i*c)+j)=*num;
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
    int r,c,*p,num;
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
    input(p,r,c,&num);
    printf("The final matrix : \n");
    display(p,r,c);
    free(p);
    p=NULL;


return 0;
}