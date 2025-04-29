#include<stdio.h>
int main()
{

    unsigned int num,pos;
    printf("Enter a number: ");
    scanf("%u", &num);
    //display the bits of num
    for(int i=sizeof(num)*8-1;i>=0;i--)
    {
        printf("%d",(num>>i)&1);
        if(i%8==0) printf(" ");
    }
    printf("\n");
    printf("Enter the position of the bit to check (0-31): ");
    scanf("%u", &pos);
    if(num&(1<<pos))
    {
        printf("The bit at position %u is set to 1.\n", pos);
    }
    else
    {
        printf("The bit at position %u is set to 0.\n", pos);
    }
return 0;
}