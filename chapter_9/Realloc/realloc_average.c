#include<stdio.h>
#include<stdlib.h>

int sum_of_array(int* p,int n)
{
    int sum=0,*q;
    for(q=p;q<p+n;q++)
    {
        sum+=*q;
    }
    return sum/n;
}


int* memory_allocation(int n)
{
    int *s=(int*)calloc(sizeof(n),sizeof(int));
    return s;
}

int main()
{
int n,*p,*q;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
while(n<=0)
{
    printf("Invalid input\nPlease enter a positive integer: ");
    scanf("%d",&n);
}
p=memory_allocation(n);
if(p==NULL)
{
    printf("Memory allocation failed.");
}
printf("Please enter array elements: ");
for(q=p;q<p+n;q++)
{
    scanf("%d",q);
}
int average=sum_of_array(p,n);
printf("Average of array elements: %d\n",average);
int m;
printf("Enter the no.of elements to be added to the existing array: ");
scanf("%d",&m);
int *r=realloc(p,(n+m)*sizeof(int));
if(r==NULL)
{
    printf("Memory reallocation failed.");
    free(p);
    return EXIT_FAILURE;
}
p=r;
printf("Enter the elements to be added to the array: ");
for(q=p+n;q<p+n+m;q++)
{
    scanf("%d",q);
}
average=sum_of_array(p,n+m);
printf("Average of array elements after adding new elements: %d\n",average);
free(p);
return 0;
}