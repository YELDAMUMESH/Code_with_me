#include<stdio.h>
int main()
{

    int n,sum=0,i;
    printf(" Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+8*i;
    }
    printf(" Sum of first %d multiples of 8 is %d\n",n,sum);

return 0;
}