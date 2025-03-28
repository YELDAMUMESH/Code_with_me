#include<stdio.h>
int main()
{
    int array[10],*p=array,*q=array,n;
    printf("Enter no.of elements: ");
    scanf("%d",&n);

    printf("Please enter array elements\n");
    for(p=array;p<&array[n];p++)
    {
        scanf("%d",p);
    }

    printf("\nEntered array elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d",array[i]);
    }

    *p=array[4],*q=array[5];
    printf("\nAddress of p=%p\nAddress of q=%p\n",(void*)p,(void*)q);
    printf("p>q: %d\n",p>q);
    printf("p<q: %d\n",p<q);
    printf("p==q: %d\n",p==q);
    printf("p!=q: %d\n",p!=q);
    printf("Values pointed are: %d %d\n",*p,*q);
    printf("*p>*q: %d\n",*p>*q);
    printf("*p<*q: %d\n",*p<*q);
    printf("*p==*q: %d\n",*p!=*q);

    printf("\n");
return 0;
}