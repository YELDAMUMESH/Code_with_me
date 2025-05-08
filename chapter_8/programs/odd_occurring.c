
//C Program for Find the Number Occurring Odd Number of Times

#include<stdio.h>
#include<stdlib.h>

void occuring_odd(int *r, int n)
{
    //Initialising array with zero's
    int visited[n];
    for(int i=0;i<n;i++)
    {
        *(visited+i)=0;
    }
    
    for(int *p=r;p<r+n;p++)
    {
        int count=0;
        if(*(visited+(p-r))==1)
        {
            continue;
        }
        
        for(int *q=r;q<r+n;q++)
        {
            if(*p==*q)
            {
                count++;
                *(visited+(q-r))=1;
            }
        }
        
        if(count%2!=0 && *p%2!=0)
        {
            printf("%d repeated %d times\n",*p,count);
        }
    }
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
    
    //memory allocation
    int *m;
    m=(int*)calloc(n,sizeof(int));
    if(m==NULL)
    {
        prinf("Memory allocation failed !!!\n");
        return EXIT_FAILURE;
    }
    else
    {
        printf("Memory allocated successfully\n");
    }
    
    //Input function call
    input(m,n);
    
    //Check's no.of odd occurences 
    occuring_odd(m,n);
    
    //Freeing the allocated memory
    free(m);
    m=NULL;
    
    return 0;
}