#include<stdio.h>
int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=sizeof(num)*8-1; i>=0; i--)
    {
        printf("%d", (num>>i)&1);
        if(i%8==0)
            printf(" ");
    }
    printf("\n");
    int x = ~(num);
    printf("After NOT operation x = ");
    printf("%d", x);
    printf("\n");
    for(int i=sizeof(x)*8-1; i>=0; i--)
    {
        printf("%d", (x>>i)&1);
        if(i%8==0)
            printf(" ");
    }
    printf("\n");


return 0;
}