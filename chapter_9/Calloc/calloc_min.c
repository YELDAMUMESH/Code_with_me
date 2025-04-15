#include<stdio.h>
#include<stdlib.h>

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
    int min = *p;
    minimum(&min, n, p);
    printf("Minimum element is: %d\n",min);
    free(p);



return 0;
}