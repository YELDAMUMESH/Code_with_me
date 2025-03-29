#include<stdio.h>
int main()
{

    int a[10]={10,43,56,87,90,34,67,58,95,78};
    int *p,count=0;

    for(p=a;p<a+10;p++)
    {
        if(*p>10)
        count++;
    }
    printf("No.of elements greater than 10 = %d\n",count);
return 0;
}