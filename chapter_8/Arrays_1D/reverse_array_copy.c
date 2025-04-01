#include<stdio.h>

void display(int h[],int n)
{
    int *k;
    for(k=h;k<=h+9;k++)
    {
        printf("%d ",*k);
    }

    printf("\n");
    return;
}

int main()
{

    int a[10]={1,2,3,4,5,6,7,8,9,10},b[10];
    int *p,*q=b;
    display(a,10);
    for(p=a+9;p>=a;p--)
    {
        *q=*p;
        q++;
    }
    display(b,10);

return 0;
}