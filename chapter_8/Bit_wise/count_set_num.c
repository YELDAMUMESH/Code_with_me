#include<stdio.h>
int main()
{

    int num,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=sizeof(num)*8-1;i>=0;i--)
    {
        printf("%d",(num>>i)&1);
        if(i%8==0) printf(" ");
        if((num>>i)&1) count++;
    }

    // while(num>1){    
    //     num=num&(num-1);
    //     count++;
    // } 

    printf("\n");
    printf("Number of 1's in binary representation: %d\n", count);
    printf("Number of 0's in binary representation: %ld\n", sizeof(num)*8-count);
return 0;
}