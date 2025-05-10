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


void reverse(int *r, int* n) {
    
    int *q=n;
    int *p=r;
    
    while(p<q)
    {
        *p = *p ^ *q;
        *q = *p ^ *q;
        *p = *p ^ *q;
        p++;
        q--;
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
    
    n = n % size;

    if (n > 0){
    reverse(m, m + n - 1);
    display(m,size);
    reverse(m + n, m + size - 1);
    display(m,size);
    reverse(m, m + size - 1);
    display(m,size);
    }
    else
    display(m,size);

    free(m);
    m=NULL;

    return 0;
}