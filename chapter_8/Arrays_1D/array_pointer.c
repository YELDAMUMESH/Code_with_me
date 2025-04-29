#include<stdio.h>
int main()
{

    int arr[]={1,2,3,4,5};
    int *p;
    for(p=arr;p<arr+sizeof(arr)/sizeof(arr[0]);p++)
    {
        printf("Element %ld: %d \n",p-arr,*p);
        printf("Adress of Element %ld: %zu \n",p-arr,p);
    }
return 0;
}