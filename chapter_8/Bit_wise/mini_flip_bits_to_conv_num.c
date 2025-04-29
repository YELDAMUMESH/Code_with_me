#include<stdio.h>

void display(int num)
{
    for(int i=sizeof(num)*8-1;i>=0;i--)
    {
        printf("%d", (num>>i)&1);
        if(i%8==0)
            printf(" ");
    }
    printf("\n");
}

int main()
{

    int num1,num2,count=0,XOR=0;
    printf("Enter any two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("Binary representation of %d: ", num1);
    display(num1);  
    printf("Binary representation of %d: ", num2);
    display(num2);
    XOR=num1^num2;
    printf("Binary representation of %d^%d: ",num1,num2);
    display(XOR); 
    while(XOR>1)
    {
        XOR=XOR&(XOR-1);
        count++;
    }  
    printf("Number of bits that differ: %d\n",count);
    
return 0;
}