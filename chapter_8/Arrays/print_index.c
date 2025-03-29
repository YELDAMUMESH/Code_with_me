#include<stdio.h>

void Index(int a[],int n)
{
    int *p;
    for(p=a;p<a+n;p++)
    {
        printf("numbers[%ld]=%d\n",p-a,*p);
    }
    printf("\n");
    return;

}
int main()
{
    int numbers[8]={6,3,4,5,8,9,1,2};
    int n=sizeof(numbers)/sizeof(numbers[1]);
    Index(numbers,n);

return 0;
}