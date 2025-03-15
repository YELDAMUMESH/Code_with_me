//Counting numbers form n

#include<stdio.h>
int main()
{
int i,n;
printf("Enter the number of natural numbers you want to count: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d\n",i);
}
return 0;
}