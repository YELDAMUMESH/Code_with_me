#include<stdio.h>
int main()
{

    int array[5]={1,2,3,4,5};
    int *ptr=array,product=1;
    int n= sizeof(array)/sizeof(array[0]);
    for(ptr=array;ptr<array+n;ptr++)
    {
        product*=*ptr;
    }
    printf("Product of array = %d\n",product);
return 0;
}