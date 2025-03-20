#include<stdio.h>

void minmax(int arr[],int len,int *min,int *max)
{
    *min=*max=arr[0];
    for(int i=1;i<len;i++)
    {
        if (arr[i]<*min){
        *min = arr[i];
        }

        if(arr[i]>*max){
        *max = arr[i];
        }
    }

    return;
}


int main()
{
    int a[]={78,45,3,4,7,8,90,56,2,9},min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min,&max);
    printf("Min value is %d\n",min);
    printf("Max value is %d\n",max);



return 0;
}