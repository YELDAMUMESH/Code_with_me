#include<stdio.h>

int sum_2(int n){
    int ans;
    if (n==0 | n==1) return n;
    ans=n+sum_2(n-1);
    return ans;
}


int main()
{
int n,sum;
printf("Enter a number: ");
scanf("%d",&n);
sum=sum_2(n);
printf("The sum of 1st %d natural numbers is %d\n",n,sum);
return 0;
}