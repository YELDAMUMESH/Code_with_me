#include<stdio.h>

void display(int x[],int n)
{
    int *q;
    for(q=x;q<x+n;q++)
    {
        printf("%d ",*q);
    }
    return;
}

int main()
{

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    display(a,10);
    printf("\n");

    for(p=a;p<a+10;p++)
    {
        if((p-a)%2==0)
        {
            *p+=10;
        }

        else
        {
            *p*=2;
        }
    }
    display(a,10);
    printf("\n");
return 0;
}