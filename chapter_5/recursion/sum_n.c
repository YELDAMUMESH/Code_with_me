#include<stdio.h>

void sum_n(int n,int sum){
    if(n==0)
    {
        printf("%d\n",sum);
        return;
    }
    sum_n(n-1,sum+n);
    return;

}



int main()
{

    int n,t,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    sum_n(n,sum);
return 0;
}
