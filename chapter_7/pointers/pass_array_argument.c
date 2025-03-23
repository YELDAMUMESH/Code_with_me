//Passing array as argument to the function

#include<stdio.h>

int sum_function(int b[],int len) // here b[] means *b
{                                // Array name points to the intial address of the array which is b[0]
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=b[i];
    }

    return sum;
}



int main()
{
    int array[100],n,l;
    printf("Enter no.of elements: ");
    scanf("%d",&n);

    printf("Enter elements in the array: ");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&array[j]);
    }
    printf("%d\n",sum_function(array,n)); // passing base array i.e array[0]

return 0;
}