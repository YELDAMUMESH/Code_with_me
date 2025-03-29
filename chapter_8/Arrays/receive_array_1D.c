#include<stdio.h>
int main()
{

    int a[100];
    int *p,n;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(p=a;p<a+n;p++)
    {
        scanf("%d",p);
    }
    printf("Elements are:\n");
    for(p=a;p<a+n;p++)
    {
        printf("%d  ",*p);
    }
    printf("\n");
return 0;
}