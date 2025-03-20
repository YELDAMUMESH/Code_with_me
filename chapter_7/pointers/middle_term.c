#include<stdio.h>

int *middle_term(int arr[],int n)
{
    return &arr[n/2];
}

int main()
{
    int a[100],n,len=sizeof(a)/sizeof(a[0]);
    printf("Enter no.of array elements: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    printf("Array elements are: ");

    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);

    }

    printf("\nTotal size of array  = %d\n",len);

    if (n%2==0)
    {
        printf("Enter odd no.of elements\n");
    }
    else{
    int *mid=middle_term(a,n);
    printf("Middle term is : %d\n",*mid);
    }

return 0;
}