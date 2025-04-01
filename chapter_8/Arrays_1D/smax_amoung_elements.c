#include<stdio.h>
int main()
{
    int a[10]={4,7,9,10,2,4,8,56,1,700};
    int *p,max=0,smax=0;

    for(p=a;p<a+10;p++)
    {
        if(*p>max)
        {
            smax=max;
            max=*p;
        }

        if(*p>smax && *p<max)
        {
            smax=*p;
        }
    }

    printf("Max element: %d",max);
    printf("\nSecond max element: %d\n",smax);

return 0;
}