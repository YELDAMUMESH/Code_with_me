#include<stdio.h>
int main()
{

    unsigned int num;
    printf("Enter the value of num: ");
    scanf("%u",&num);
    for(int i=sizeof(num)*8-1;i>=0;i--)
    {
        printf("%d",(num>>i)&1);
        if(i%8==0) printf(" ");
    }
    printf("\n");
    unsigned int s;
    printf("Enter the no.of bits: ");
    scanf("%u",&s);
    unsigned int result = (1<<s)-1;
    printf("Result of (1<<%u)-1 : %u\n",s,result);
    for(int i=sizeof(result)*8-1;i>=0;i--)
    {
        printf("%d",(result>>i)&1);
        if(i%8==0) printf(" ");
    }
    printf("\n");
return 0;
}