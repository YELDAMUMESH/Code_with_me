#include<stdio.h>

int power(int a,int b){
    if(b==0) return 1;
    int ans=a*power(a,b-1);
    return ans;
}


int main()
{

    int a,b;
    printf("Enter base and power: ");
    scanf("%d %d",&a,&b);
    int p=power(a,b);
    printf("%d^%d = %d\n",a,b,p);

return 0;
}