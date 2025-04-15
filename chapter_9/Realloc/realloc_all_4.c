#include<stdio.h>
#include<stdlib.h>

int sum_of_array(int* p,int n)
{
    int sum=0,*q;
    for(q=p;q<p+n;q++)
    {
        sum+=*q;
    }
    return sum;
}

void minimum(int* min,int n,int *p)
{
    int *q;
    for(q=p;q<p+n;q++)
    {
        if(*q<*min)
        {
            *min=*q;
        }
    }
}

void maximum(int* max,int n,int *p)
{
    int *q;
    for(q=p;q<p+n;q++)
    {
        if(*q>*max)
        {
            *max=*q;
        }
    }
}


int* dynamic_memory(int n)
{
    int* s = (int*)calloc(n,sizeof(int));
    return s;
}

int main()
{

    int n,*p,*q;
    printf("Enter the no.of elements: ");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("Invalid!!!");
        printf("Enter the +ve number: ");
        scanf("%d",&n);
    }
    p=dynamic_memory(n);
    if(p==NULL)
    {
        printf("Memory allocation failed!!!");
        return EXIT_FAILURE;
    }
    printf("Enter the array elements: ");
    for(q=p;q<p+n;q++)
    {
        scanf("%d",q);
    }
    int max = *p;
    maximum(&max, n, p);    
    printf("Maximum element is: %d\n",max);
    int min = *p;
    minimum(&min, n, p);
    printf("Minimum element is: %d\n",min);
    int average=sum_of_array(p,n);
    printf("Average of array elements: %d\n",average/n);
    int total=sum_of_array(p,n);
    printf("Sum of array elements: %d\n",total);


    // USING realloc() for adding new elements to the array

    printf("----------------------------------------------------------------------\n");


    int m;
    printf("Enter the number of elements to be added: ");
    scanf("%d",&m);
    int *r=realloc(p,(n+m)*sizeof(int));
    if(r==NULL)
    {
        printf("Memory reallocation failed!!!");
        free(p);
        return EXIT_FAILURE;
    }
    p=r;
    printf("Enter the %d new array elements: ",m);
    for(q=p+n;q<p+n+m;q++)
    {
        scanf("%d",q);
    }
    printf("Array after adding new elements: ");
    for(q=p;q<p+n+m;q++)
    {
        printf("%d ",*q);
    }
    printf("\n");
    maximum(&max, n+m, p);    
    printf("Maximum element is: %d\n",max);
    minimum(&min, n+m, p);
    printf("Minimum element is: %d\n",min);
    average=sum_of_array(p,n+m);
    printf("Average of array elements: %d\n",average/(n+m));
    total=sum_of_array(p,n+m);
    printf("Sum of array elements: %d\n",total);

    free(p);



return 0;
}