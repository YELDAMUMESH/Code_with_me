#include<stdio.h>
int main()
{

    int a[7]={0,1,2,3,4,5,7};
    int *p,*q;
    int x=7,count=0;

    for(p=a;p<a+7;p++)
    {
        for(q=p+1;q<a+7;q++)
        {
            if(*p+*q==7)
            {
                printf("Pair(%d,%d)\n",*p,*q);
                count++;
            }
        }
    }
    printf("No. of pairs = %d\n",count);
return 0;
}