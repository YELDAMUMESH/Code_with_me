//Finding multiples of n in reverse order

#include<stdio.h>
int main()
{
int n,i;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=10;i>=0;i--) // for(i=10;i;i--)
{
    printf("%dx%d = %d\n",n,i,n*i);
}
return 0;
}