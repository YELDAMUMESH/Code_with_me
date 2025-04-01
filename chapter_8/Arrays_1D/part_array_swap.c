#include<stdio.h>

void display(int b[],int n)
{
    int *p;
    for(p=b;p<b+n;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return;
}

void swap(int b[],int si,int en,int n)
{
    int *q,*k;
    for(q=b+si,k=b+en;q<k;q++,k--)
    {
        int temp=*q;
        *q=*k;
        *k=temp;
    }
    return;
}

int main()
{

    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]),si,en;
    printf("Please enter stating and ending indexes: ");
    scanf("%d %d",&si,&en);
    if (si < 0 || en >= n || si >= en)
    {
        printf("Invalid indices! Please enter values in range (0 to %d) where start < end.\n", n - 1);
    }
    else{
    swap(a,si,en,n);
    display(a,n);
    }

return 0;
}