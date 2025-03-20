#include<math.h>
#include<stdio.h>
int main()
{
    int num,n,power;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    power=pow(num,n);
    printf("The value of %d power %d is %d\n",num,n,power);

return 0;
}