
//C Program to find sum of elements in a given array

#include <stdio.h>
#include <stdlib.h>

int find_sum(int* p,int n)
{
    int *q;
    int sum=0;
    
    for(q=p;q<p+n;q++)
    {
        sum+=*q;
    }
    
    return sum;
}




void input (int* p,int n)
{
    int *q;
       printf("Enter the array elements: ");
       for(q=p;q<p+n;q++)
       {
           scanf("%d",q);
       }
}

int main()
{
   int n;
   int sum;
   printf("Enter no.of array elements: ");
   scanf("%d",&n);
   int *m;
   
   //Created memory for array storage
   m=(int*)malloc(n*sizeof(int));
   
   if(m==NULL)
   {
       printf("Memory allocation failed\n");
       return EXIT_FAILURE;
   }
   
   else
   {
       input(m,n);
       sum = find_sum(m,n);
       printf("Sum of array elements: %d\n",sum);
       
   }
   //Freeing the allocated memory
   free(m);
   m=NULL;
   
    return 0;
}