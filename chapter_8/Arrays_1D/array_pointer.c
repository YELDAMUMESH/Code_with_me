#include<stdio.h>
int main()
{

    int arr[]={1,2,3,4,5};
    int *p;
    printf("array address: %p\n",arr);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("array [%d]: %p\n",i,arr+i);
    }
    printf("Complete array address: %p\n",arr);
    printf("complete array address + 1: %p\n",&arr+1);

return 0;
}