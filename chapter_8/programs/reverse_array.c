// C Program for Write a program to reverse an array

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

void reverse(int *r,int n)
{
    int *p,*q;
    for(p=r,q=r+n-1;p<q;p++,q--)
    {
        *p = *q ^ *p;
        *q = *q ^ *p;
        *p = *q ^ *p;
        
    }
    
    display(r,n);
}


void input(int *r,int n)
{
    for(int *p=r;p<r+n;p++)
    {
        scanf("%d",p);
    }
}



int* memory(int n)
{
    int *p;
    p =(int*)malloc(n*sizeof(int));
    return p;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *m=memory(n);
    if(m==NULL)
    {
        printf("Memory allocation failed!!\n");
        return EXIT_FAILURE;
    }
    printf("Enter %d array elements: ",n);
    input(m,n);
    //Reversing an array
    printf("After reversing: ");
    reverse(m,n);
    
    free(m);
    m=NULL;
    
    return 0;
}