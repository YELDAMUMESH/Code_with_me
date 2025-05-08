
//C Program for Given an array A[] and a number x, check for pair in A[] with sum as x

#include <stdio.h>
#include <stdlib.h>


void pairs(int *r,int n,int res)
{
    int *q,*p;
    int count=0;
    for(p=r;p<r+n;p++)
    {
        for(q=p;q<r+n;q++)
        {
            if(*q+*p==res)
            {
                printf("Pair %d : (%d,%d)\n",count,*p,*q);
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("No pairs found\n");
    }
}



void input(int *p,int n)
{
    printf("Enter %d array elements: ",n);
    for(int *q=p;q<p+n;q++)
    {
        scanf("%d",q);
    }
    return;
}


int main()
{
    int n,res;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    else
    {
        printf("Memory allocated successfully\n");
    }
    //Inputting the array elements
    input(p,n);
    printf("Enter a number to check: ");
    scanf("%d",&res);
    int *q;
    pairs(p,n,res);
    //Freeing the allocated memory
    free(p);
    p=NULL;
    
    
    return 0;
    
}