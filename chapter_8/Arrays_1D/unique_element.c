#include<stdio.h>
#include<stdbool.h>
int main()
{

    int a[]={1,2,3,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]),*p,*q;
    for(p=a;p<a+n;p++)
    {
        bool flag=false;
        for(q=p+1;q<a+n;q++)
        {
            if(*p==*q)
            {
                flag=true;
            }

        }

        if(flag==false)
        {
            printf("Unique element : %d\n",*p);
            break;
        }
    }
return 0;
}