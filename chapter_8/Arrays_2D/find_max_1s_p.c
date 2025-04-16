#include<stdio.h>
#include<stdlib.h>

int* dynamic_memory(int row,int col)
{
    int *s=(int*)malloc(row*col*sizeof(int));
    return s;
}
int main()
{
    int r,c,*p,*q,num1,num2;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    p= dynamic_memory(r,c);
    if(p==NULL)
    {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    printf("!!!!Memory allocated successfully!!!!\n");
    printf("Now enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int *ptr=p+(i*c)+j;
            if(i==r-1)
            {
                *ptr=num1;
            }
            else if(i==j)
            {
                *ptr=num1;
            }
            else if(j%2==0)
            {
                *ptr=num1;
            }
            else
            {
                *ptr=num2;
            }
        }
    }
    printf("Printing the matrix: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",*(p+(i*c)+j));
        }
        printf("\n");
    }

    //finding the row which contains max no.of 1's
    int final_max=0,final_index=0;
    for(int i=0;i<r;i++)
    {
    int count=0;
    for(int j=0;j<c;j++)
    {
        if(*(p+(i*c)+j)==1)
        {
            count++;
        }
    }
    if(count>final_max)
    {
        final_max=count;
        final_index=i;
    }
    }
    printf("The row which contains max no.of 1's is: %d\n",final_index+1);
    printf("No.of 1's are: %d\n",final_max);

    free(p);

return 0;
}