#include<stdio.h>
#include<stdlib.h>

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
    printf("Maximum element for the new array: %d\n",max);
    free(p);



return 0;
}