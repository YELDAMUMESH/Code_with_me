#include<stdio.h>
int main()
{
    int a[5],sum=0;
    printf("Enter the any 5 values: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&*(a+i));
    }

    for(int j=0;j<5;j++)
    {
        printf("%d ",*(a+j));
    }
    printf("\n");

    for(int i=0;i<5;i++)
    {
        sum+=*(a+i);
    }

    printf("Sum of elements is : %d\n",sum);



return 0;
}