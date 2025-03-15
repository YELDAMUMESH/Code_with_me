// Finding sum of first n natural numbers using do while loop

#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("Enter the value of n: ");
scanf("%d",&n);
do{
    sum=sum+i;
    i++;
}while(i<=n);
printf("Sum of first %d natural numbers is %d\n",n,sum);

return 0;
}