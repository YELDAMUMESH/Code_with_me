
//C Program for Largest Sum Contiguous Subarray

#include<stdio.h>
#include<stdlib.h>


int max_sub(int *r,int n,int *max)
{
    *max=*r;
    int *p,*q;
    
    for(p=r;p<r+n;p++)
    {
        int sum=0;
        for(q=p;q<r+n;q++)
        {
            sum+=*q;
        }
        
        if(sum>*max)
        {
            *max=sum;
        }
    }
    
    return *max;
    
    
}



void input(int *p,int n)
{
    int *q;
    printf("Enter %d array elements: ",n);
    for(q=p;q<p+n;q++){
    scanf("%d",q);
    }
    return;
}

int main()
{
    int n;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    int max;
    
    //memory allocation
    int *m;
    m=(int*)calloc(n,sizeof(int));
    if(m==NULL)
    {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    
    else
    {
        printf("Memory allocated successfully\n");
    }
    
    //Input function call
    input(m,n);
    
    //max sub array sum
    max_sub(m,n,&max);
    
    printf("%d\n",max);

    //Freeing the allocated memory
    free(m);
    m=NULL;
    
    return 0;
}