// Convert degree to fahrenheit(F)= 9/5*c+32


#include<stdio.h>
int main()
{
    float c;
    printf("Enter temperature in degree celsius: ");
    scanf("%f",&c);
    printf("Temperature in fahrenheit is: %f\n",(9/5)*c+32);

return 0;
}