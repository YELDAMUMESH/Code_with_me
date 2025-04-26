#include<stdio.h>
int main()
{

    unsigned int num,pos;
    printf("Enter the number: ");
    scanf("%u",&num);
    printf("Enter the possition you want to remove: ");
    scanf("%u",&pos);

    printf("Before clearing the %u th bit: \n",pos);
    for(int i=sizeof(num)*8-1;i>=0;i--)
    {
        printf("%d",(num>>i)&1);
        if(i%4==0) printf(" ");
    }

    num =num & ~(1<<pos); // Formula for clearing the bit

    printf("\nAfter clearing the %u th bit: \n",pos);
    printf("%u --- ",num);
    for(int i=sizeof(num)*8-1;i>=0;i--)
    {
        printf("%d",(num>>i)&1);
        if(i%4==0) printf(" ");
    }
    printf("\n");

return 0;
}