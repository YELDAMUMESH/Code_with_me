//An array containing elements from 1 to n and one of the element is missing from this range find the missing element ?


#include<stdio.h>

int total_sum(int n)
{
    int toatal_sum=0;
    for(int i=1;i<=n+1;i++)
    {
        toatal_sum+=i;
    }
    return toatal_sum;
}


int sum_array(int b[],int n)
{
    int *p,array_sum=0;
    for(p=b;p<b+n;p++)
    {
        array_sum= array_sum+*p;
    }
    return array_sum;
}


void display(int a[],int n)
{
    int *q;
    for(q=a;q<a+n;q++)
    {
        printf("%d ",*q);
    }

}

void receive(int a[],int n)
{
    int *p;
    for(p=a;p<a+n;p++)
    {
        scanf("%d",p);
    }
    return;

}
int main()
{

    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d array elements : ",n);
    receive(a,n);
    printf("You entered the following array elements : ");
    display(a,n);

    int sum_of_array =sum_array(a,n);
    printf("\nSum of array elements : %d",sum_of_array);
    int total_n_sum= total_sum(n);
    printf("\nSum of array elements from 1 to %d = %d\n",n,total_n_sum);
    printf("The difference of both the sum i.e %d - %d = %d\n",total_n_sum,sum_of_array,total_n_sum-sum_of_array);
    printf("Missing element = %d\n",total_n_sum-sum_of_array);

return 0;
}