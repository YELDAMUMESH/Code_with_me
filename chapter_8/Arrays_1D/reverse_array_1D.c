#include<stdio.h>

void reverse(int a[],int n)
{
    int *p;
    printf("After array reversing: ");
    for(p=a+(n-1);p>=a;p--) //Start from last element -- a[9] since array starts from 0-n;
    {
        printf("%d ",*p);
    }
}

int main()
{
    int array[100];
    int *p,n;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(p=array;p<array+n;p++)
    {
        scanf("%d",p);
    }
    printf("\nBefore array reversing: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    reverse(array,n);
    printf("\n");

return 0;
}