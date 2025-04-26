#include<stdio.h>

void swap(unsigned int *a,unsigned int *b)
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
    return;
}

int main()
{
    unsigned int num1,num2;
    printf("Enter the values of num1,num2: ");
    scanf("%d %d",&num1,&num2);
    printf("Before swaping : %d %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swaping : %d %d\n",num1,num2);
return 0;
}