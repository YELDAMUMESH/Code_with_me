//Fiding tax

#include<stdio.h>
int main()
{
int income;float tax=0;
printf("Enter your income:");
scanf("%d",&income);
if(income<=250000)
tax=0;
else if(income>250000 && income<=500000){
    tax=(income-250000)*0.05;
}
else if(income>500000 && income<=1000000){
    tax= 0.05*(500000-250000)+(income-500000)*0.2;
}
else{
    tax= 0.05*(500000-250000)+0.2*(1000000-500000)+0.3*(income-1000000);
}
printf("Your tax is: %.2f\n",tax);

return 0;
}