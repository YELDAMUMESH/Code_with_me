#include<stdio.h>
int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=sizeof(num)*8-1;i>=0;i--){
        printf("%d", (num>>i)&1);
        if(i%8==0) printf(" ");
    }
    printf("\n");
    num=num&(num-1);
    for(int i=sizeof(num)*8-1;i>=0;i--){
        printf("%d", (num>>i)&1);
        if(i%8==0) printf(" ");
    }
    printf("\n");
return 0;
}