#include<stdio.h>
int main()
{
    int array[100],n;
    int *p=array; // here pointer p points to 0th address of of array which is array[0] i.e *p=array[0]

    printf("Enter no.of elements in an array: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(p=array;p<array+n;p++)
    {
        scanf("%d",p);
    }

    printf("Before reversing array elements are: ");

    for(p=array;p<array+n;p++)
    {
        printf("%d ",*p);
    }

    printf("\nAfter reversing array elements: ");
    
    for(p=array+n-1;p>=array;p--)
    {
        printf("%d ",*p);
    }

    printf("\n");

return 0;
}