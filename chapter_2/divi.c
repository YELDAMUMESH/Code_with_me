// Finding if given numbers are divisible or not


#include<stdio.h>
int main()
{
int a,b;
printf("Enter the values of a&b: ");
scanf("%d %d",&a,&b);
if(a%b==0){
    printf("a is divisible by b\n");
}
else{
    printf("a is not divisible by b\n");
    }
return 0;
}