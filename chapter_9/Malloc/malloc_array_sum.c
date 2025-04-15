#include<stdio.h>
#include<stdlib.h>

int sum_of_array(int n,int *p)
{
    int sum=0,*r;
    for(r=p;r<p+n;r++)
    {
        sum+=*r;
    }
    return sum;
}


int* memory_allocation(int n)
{
    int *s= (int*)malloc(n * sizeof(int));
    return s;
}


int main()
{
int n,*p,*q;
printf("Enter no.of elements in the array: ");
scanf("%d",&n);
p = memory_allocation(n);
printf("Enter elements in the array:\n");
for(q=p;q<p+n;q++)
{
    scanf("%d",q);
}
printf("Entered elements are : ");
for(q=p;q<p+n;q++)
{
    printf("%d ",*q);
}
printf("\n");
int total = sum_of_array(n,p);
printf("Sum of array elements is: %d",total);
free(p);
printf("\n");
return 0;
}