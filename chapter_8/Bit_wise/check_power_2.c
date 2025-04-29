#include<stdio.h>
int main()
{

    unsigned int a;
    printf("Enter any positive number : ");
    scanf("%u",&a);
    printf("Powers of two are: ");
    for(int i=1;i<=20;i++)
    {
        int temp;
        temp=(1<<i);
        printf("%d ",temp);
    }
    printf("......\n");
    if(a==0)
    {
        printf("Not the power of 2\n");
    }
    else
    {
    unsigned int result;
    result = a&(a-1);
    printf("Result of a&(a-1) : %u\n",result);
    if(result==0)
    {
        printf("Power of two\n");
    }
    else
    {
        printf("Not the power of two\n");
    }
}
return 0;
}