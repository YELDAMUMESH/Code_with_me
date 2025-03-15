#include<stdio.h>

int sum(int n){
    int ans;
    if (n==0 || n==1)
    return n;
    ans=n+sum(n-1);
    return ans;
}



int main()
{
    int n,ans;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    ans=sum(n);
    printf("%d\n",ans);

return 0;
}