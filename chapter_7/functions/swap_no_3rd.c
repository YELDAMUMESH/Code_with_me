#include<stdio.h>

void swap(int* n,int* m)
{
    *n=*n+*m;
    *m=*n-*m;
    *n=*n-*m;
    printf("After swap : a=%d b=%d\n",*n,*m);
    return;
}

int main()
{

    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    int* x=&a;
    int* y=&b;
    printf("Address of x is %p\n",&x);
    printf("Address of y is %p\n",&y);
    printf("Address of a is %p\n",&a);
    printf("Address of b is %p\n",&b);
    printf("Pointer pointing to variable a is *x and value stored in a : %d",*x);
    printf("\nPointer pointing to variable b is *y and value stored in b : %d\n",*y);
    printf("Before swap: a=%d b=%d\n",*x,*y);
    swap(x,y);
return 0;
}