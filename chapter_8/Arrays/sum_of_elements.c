#include<stdio.h>
int main()
{

    int array[5]={1,2,3,4,5};
    int *ptr=array,sum=0;
    int n= sizeof(array)/sizeof(array[0]);
    for(ptr=array;ptr<array+n;ptr++)
    {
        sum+=*ptr;
    }
    printf("Sum of array = %d\n",sum);
return 0;
}