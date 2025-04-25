#include<stdio.h>
#include<stdlib.h>


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
}


void input(int *p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",p+(i*c)+j);
        }
    }
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
    printf("Enter the matrix of size %d X %d :\n",r,c);
    input(p,r,c);
    printf("The matrix is:\n");
    display(p,r,c);
    int row,col;

    //For accessing row elements

    while(1)
    {
        printf("Enter the row number which you want to access: ");
        scanf("%d",&row);
        if(row==-1)
        {
            printf("Exiting row access.\n");
            break;
        }
        if(row<r)
        {
            for(int j=0;j<c;j++)
            {
                printf("%d ",p[row*c+j]);
            }
            printf("\n");
        }
        else
        {
            printf("Invalid row number.\n");
        }
    }

    //For accessing column elements

    while(1)
    {
        printf("Enter the column number which you want to access: ");
        scanf("%d",&col);
        if(col==-1)
        {
            printf("Exiting column access.\n");
            break;
        }
        if(col<c)
        {
            for(int i=0;i<r;i++)
            {
                printf("%d ",p[i*c+col]);
                printf("\n");
            }
        }
        else
        {
            printf("Invalid row number.\n");
        }
    }
    free(p);
    p=NULL;

return 0;
}