//Sum of first n natural numbers using while loop

#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
    sum=sum+i;
    i++;
}
printf("Sum of first %d natural numbers is %d\n",n,sum);
return 0;
}