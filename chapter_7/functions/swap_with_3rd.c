#include<stdio.h>

void swap(int* n, int* m)
{
    int temp;
    temp=*m;
    printf("Moving value of b into temp\n");
    *m=*n;
    printf("Moving value of a into b\n");
    *n=temp;
    printf("Moving value of temp into a\n");
    return;

}


int main()
{

int a,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
int* x=&a;
int* y=&b;
printf("Before swaping values of a and b = %d,%d\n",*x,*y);
swap(x,y);
printf("After swaping values of a and b = %d,%d\n",*x,*y);
return 0;
}