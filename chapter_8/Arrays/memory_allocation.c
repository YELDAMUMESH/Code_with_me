#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    int *p,n=sizeof(array)/sizeof(array[0]);
    for(p=array;p<array+n;p++)
    {
        printf("array[%ld]=%d, memory location= %ld",p-array,*p,(long)p);
        printf("\n");
    }

return 0;
}