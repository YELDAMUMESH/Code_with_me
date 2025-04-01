#include<stdio.h>

void display(int b[],int l)
{
    int *p;
    for(p=b;p<b+l;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return;
}


void reverse(int a[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return;
}

int main()
{

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    display(a,n);
    reverse(a,n);
    display(a,n);

return 0;
}