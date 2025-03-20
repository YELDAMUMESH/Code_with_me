#include<stdio.h>

int *middle_term(int arr[],int n)
{
    return &arr[n/2];
}

int main()
{
    int a[]={4,7,8,9,4,2,6},len=sizeof(a)/sizeof(a[0]);
    int *mid=middle_term(a,len);
    printf("%d\n",*mid);

return 0;
}