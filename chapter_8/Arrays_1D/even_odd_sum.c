#include<stdio.h>
int main()
{

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p,even_sum=0,odd_sum=0,diff=0;

    for(p=a;p<a+10;p++)
    {
        if((p-a)%2==0)
        even_sum+=*p;
        else
        odd_sum+=*p;
    }
    printf("Sum of even indexes is %d\n",even_sum);
    printf("Sum of odd indexes is %d\n",odd_sum);
    diff=even_sum-odd_sum;
    printf("Difference between sum of even and odd indexes is %d\n",diff);

return 0;
}