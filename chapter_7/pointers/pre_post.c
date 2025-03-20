#include<stdio.h>
int main()
{
    int a[]={10,20,30,40};
    int *ptr=&a[1];
    printf("%d\n",*ptr);       //20
    printf("%d\n",*(ptr++)); //20
    printf("%d\n",*(++ptr));   //40
    printf("%d\n",*(ptr--));  //40
    printf("%d\n",*(--ptr));  //20

    return 0;
}