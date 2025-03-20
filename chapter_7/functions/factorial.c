#include<stdio.h>

int fact(int a)
{
    int ans=1;
    for(int i=a;i>=1;i--)
    {
        ans=ans*i;
        printf("%d! ",i);
    }

    return ans;

}

int main()

{
    int n,factorial;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    factorial=fact(n);
    printf("\n");
    printf("Factorial of %d is %d\n", n, factorial);
return 0;
}