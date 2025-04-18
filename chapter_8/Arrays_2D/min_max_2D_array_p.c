#include<stdio.h>
#include<stdlib.h>

void find_min_max(int *max,int *min,int *p,int r,int c)
{
    *max=*p,*min=*p;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(*(p+(i*c)+j)>*max)
            {
                *max=*(p+(i*c)+j);
            }
            if(*(p+(i*c)+j)<*min)
            {
                *min=*(p+(i*c)+j);
            }
        }
    }
    return;
}



void display(int *p,int r,int c)
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


void input(int* p,int r,int c)
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
    int *s=(int*)malloc((r*c)*sizeof(int));
    return s;
}

int main()
{

    int r,c,*p;
    printf("Enter no.of rows and columns: ");
    scanf("%d%d",&r,&c);
    p=memory(r,c);
    if(p==NULL)
    {
        printf("Memory allocation failed!!\n");
        return EXIT_FAILURE;
    }
    printf("Enter the elements of %d x %d matrix:\n",r,c);
    input(p,r,c);
    printf("Matrix entered is: \n");
    display(p,r,c);
    int final_max,final_min;
    find_min_max(&final_max,&final_min,p,r,c);
    printf("Maximum element in the matrix is: %d\n",final_max);
    printf("Minimum element in the matrix is: %d\n",final_min);
    free(p);
    p=NULL;


return 0;
}