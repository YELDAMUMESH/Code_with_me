#include<stdio.h>
#include<stdlib.h>

int average(int *p,int n)
{
    int *r,tot=0;
    for(r=p;r<p+n;r++)
    {
        tot+=*r;
    }
    return tot/n;
}

int* dynamic_memory(int n)
{
    int* arr = (int*)malloc(n * sizeof(int));
    return arr;
}
int main()
{

    int n,*p,*q;
    printf("Enter the no.of elements : ");
    scanf("%d",&n);
    if (n <= 0) {
        printf("Invalid array size.\n");
        return -1;
    }    
    p = dynamic_memory(n);
    if(p==NULL)
    {
        printf("Memory not allocated.\n");
        return EXIT_FAILURE;
    }
    else{
    printf("Enter the array elements: ");
    for(q=p;q<p+n;q++)
    {
        scanf("%d",q);
    }
    printf("Array elements are: ");
    for(q=p;q<p+n;q++)
    {
        printf("%d ",*q);
    }
    int avg=average(p,n);
    printf("\nAverage of array elements is: %d\n",avg);
}
    free(p);

return 0;
}