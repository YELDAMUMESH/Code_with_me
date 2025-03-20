#include<stdio.h>
int main()
{
    int a=34;
    int *x=&a;
    printf("%d\n",*x);
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%p\n",&x);
    int**y=&x; // double pointer
    printf("%p\n",y);
    printf("%d\n",**y);

return 0;
}