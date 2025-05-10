//Array Rotation
// [Better Approach] Using Temporary Array – O(n) Time and O(n) Space

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


void copy(int *src, int *dest, int size)
{
    for(int *p = src, *q = dest; p < src + size; p++, q++)
    {
        *q = *p;
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
    int *m1,*m2;
    m1 = memory(size);
    //Alocate new memory allocation
    m2= memory(size);
    
    if(m1==NULL || m2==NULL)
    {
        printf("Memory allocation failed!!\n");
        return EXIT_FAILURE;
    }
    
    //Input
    printf("Enter %d array elements: ",size);
    input(m1,size);
    
    
    n = n % size; 
    //Step-1 copy elements after from n to new array
    copy(m1 + n, m2, size - n); 
    display(m2,size);
    //Step-2 copy remainig elements at last
    copy(m1, m2 + size - n, n);      
    display(m2,size);


    free(m1);
    m1=NULL;
    free(m2);
    m2=NULL;
    return 0;
}