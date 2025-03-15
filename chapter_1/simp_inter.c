// Simple interst = p*r*t


#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter the principal amount & rate of interest: ");
    scanf("%f %f",&p,&r);
    printf("Enter the time period: ");
    scanf("%f",&t);
    printf("Simple interest = %.2f\n",(p*r*t)/100);

return 0;
}