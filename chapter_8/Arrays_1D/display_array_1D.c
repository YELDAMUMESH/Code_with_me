#include<stdio.h>
int main()
{
    int array[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int *p;
    int n=sizeof(array)/sizeof(array[1]);

    printf("Array elements are as follows:\n");
    for(p=array;p<array+n;p++) // p= address of array[0] , array+n=array[0]+no.of elements(n) = array[n]
    {
        printf("%d ",*p);
    }
    printf("\n");

return 0;
}