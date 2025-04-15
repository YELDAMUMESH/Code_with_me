#include<stdio.h>
#include<stdlib.h>

int* dynamic_memory(int n)
{
    int* arr = (int*)malloc(n * sizeof(int));
    return arr;
}

int* maximum(int *max,int n,int* p)
{
    int *r;
    for(r=p;r<p+n;r++)
    {
        if(*max<*r)
        {
            *max=*r;
        }
    }
    return max;
}

int main()
{

    int n,*p,*q;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("Invalid input\n");
        printf("Enter the number of elements: ");
        scanf("%d",&n);
    }
    p=dynamic_memory(n);
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
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
    int max_value = *p;
    maximum(&max_value, n, p);
    printf("\nMaximum element is: %d\n", max_value);
    free(p);

return 0;
}