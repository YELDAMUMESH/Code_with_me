
// C Program for Program for array rotation 1 by 1

#include <stdio.h>
#include <stdlib.h>


void display(int *r,int n)
{
    for(int *p=r;p<r+n;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
}

void rotate(int *r,int size,int n)
{
    int *p,*q;
    for(int i=0;i<n;i++)
    {
        int first=*r;
        
        for(q=r;q<r+size;q++)
        {
            *q= *(q+1);
        }
        
        *(q-1)=first;
    }
    
}



void input(int *r,int size)
{
    for(int *p=r;p<r+size;p++)
    {
        scanf("%d",p);
    }
}



int* memory(int size)
{
    int *m;
    m=(int *)malloc(size*sizeof(int));
    return m;
}

int main()
{
    int size,n;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    //memory allocation
    int *m;
    m = memory(size);
    
    if(m==NULL)
    {
        printf("Memory allocation failed!!\n");
        return EXIT_FAILURE;
    }
    
    //Input
    printf("Enter %d array elements: ",size);
    input(m,size);
    
    //Rotating an array
    rotate(m,size,n);
    display(m,size);
    

    free(m);
    m=NULL;

    return 0;
}