#include <stdio.h>

void sum_of_two(int a,int b);
void sub_of_two(int a,int b);
void check(int a,int b);
void mul_of_two(int a,int b);
void div_of_two(float a,float b);

// for calling arthematic operations
void check (int a,int b)
{
    if(a>=0 && b>=0)
    {
        sum_of_two(a,b);
        sub_of_two(a,b);
        mul_of_two(a,b);
        div_of_two(a,b);
    }
    
 // if a or b is -ve    
    else
    {
        printf("Please enter possitive integers");
    }
}

//for printing arthematic operations

void sum_of_two(int a,int b)
{
    int sum=a+b;
    printf("%d + %d = %d",a,b,sum);
    printf("\n");
    return;
}

void sub_of_two( int a, int b)
{
    int sub=a-b;
     printf("%d - %d = %d",a,b,sub);
     printf("\n");
    return;
}

void mul_of_two(int a,int b)
{
    int mul=a*b;
    printf("%d x %d = %d",a,b,mul);
    printf("\n");
    return;
}

void div_of_two(float a,float b)
{
    float div=a/b;
    printf("%.2f / %.2f = %.2f",a,b,div);
    printf("\n");
    return;
    
}

//MAIN FUNCTION

int main()
{
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    check(a,b);

    return 0;
}