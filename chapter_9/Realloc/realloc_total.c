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
int total=sum_of_array(p,n);
printf("Sum of array elements before adding array elements : %d\n",total);

int m;
printf("Enter the no.of elements to be added to the existing array : ");
scanf("%d", &m);
int *s=realloc(p,(n+m)*sizeof(int));
if(s==NULL)
{
    printf("Memory reallocation failed.");
    free(p);
    return EXIT_FAILURE;
}
p=s;
printf("Enter the other elements to be added to the array: ");
for(q=p+n;q<p+n+m;q++)
{
    scanf("%d",q);
}
total=sum_of_array(p,n+m);
printf("Sum of array elements after adding array elements : %d\n",total);
free(p);
return 0;
}