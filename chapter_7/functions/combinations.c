
// program for calculating no.of possible combinations
/*

ncr = n!/(r!*(n-r)!)

*/

#include<stdio.h>

int factorial(int x)
{
    int i,fact=1;
    for(i=2;i<=x;i++)
    {
        fact=i*fact;
    }
    return fact;
}

int main()
{

    int n,r,combo,fact_n,fact_r,fact_n_r;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Enter value of r: ");
    scanf("%d",&r);
    fact_n= factorial(n);
    fact_r= factorial(r);
    fact_n_r= factorial(n-r);
    combo=fact_n/(fact_r*fact_n_r);
    printf("Combination of %d and %d is %d\n",n,r,combo);
    printf("%d\n",fact_n);
    printf("%d\n",fact_r);
    printf("%d\n",fact_n_r);
return 0;
}