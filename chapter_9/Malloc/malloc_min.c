#include<stdio.h>
#include<stdlib.h>

int minimum(int* min,int* p,int n)
{
    *min=*p;int*q;
    if(n==1)
    {
        printf("\nDefault case: ");
        return *min;
    }
    else{
    for(q=p+1;q<p+n;q++)
    {
        if(*q<*min)
        {
            *min=*q;
        }
    }
}
    
}

int* memory_allocation(int n)
{
    int *s=(int*)malloc(n * sizeof(int));
    return s;
}

int main()
{

    int n,*p,*q;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    while (n <= 0) {
    printf("Invalid input. \nPlease enter a positive value for the number of elements: ");
    scanf("%d", &n);
    }

   
    p=memory_allocation(n);
    if(p==NULL)
    {
        printf("Memory not allocated\n");
        return EXIT_FAILURE;
    }
    else{
    printf("Enter the elements of the array: ");
    for(q=p;q<p+n;q++)
    {
        scanf("%d",q);
    }
    printf("The elements of the array are: ");
    for(q=p;q<p+n;q++)
    {
        printf("%d ",*q);
    }
    int *min;
    min=p;
    minimum(min,p,n);
    printf("\nMinimum element in the array is: %d",*min);
}

    free(p);
    printf("\n");
return 0;
}