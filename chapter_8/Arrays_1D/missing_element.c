//An array containing elements from 1 to 10 and one of the element is missing from this range find the missing element ?


#include<stdio.h>

int missing(int b[],int n)
{
    int *p,sum=0;
    printf("Sum of array elements= ");
    for(p=b;p<b+n;p++)
    {
        sum=sum+*p;
        printf("+%d",*p);
    }
    printf(" = %d",sum);
    printf("\n");
    return sum;
}


int sumof(int n)
{
    int sum2=0;
    printf("Sum of 1st 10 natural numbers= ");
    for(int i=1;i<=n+1;i++)
    {
      sum2+=i; 
      printf("+%d",i); 
    }
    printf(" = %d",sum2);
    printf("\n");
    return sum2;
}


void display(int a[], int n)
{
    int *t;
    for (t = a; t < a + n-1; t++)
    {
        printf("%d ", *t);
    }
    printf("\n");
}

int main()
{

    int a[]={1,2,3,4,9,6,7,8,10};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Value of n= %d\n",n);
    display(a,n);
    int total_sum=sumof(n);
    int missing_sum=missing(a,n);
    printf("Missing number = sum of 1st 10 numbers - sum of array elements = %d",total_sum-missing_sum);
    printf("\n");
    
return 0;
}