#include<stdio.h>
#include<stdlib.h>

int findmax(int *p,int n)
{
    int *i,max=*p;
    for(i=p;i<p+n;i++)
    {
        if(max<*i)
        {
            max=*i;
        }
    }
    return max;
}



int findmin(int *p,int n)
{
    int *e,min=*p;
    for(e=p;e<p+n;e++)
    {
        if(*e<min)
        {
            min=*e;
        }

    }
    return min;
}

int average(int n,int total)
{
    return total/n;
}

int sum(int *t,int n)
{
    int *r,sum = 0;
    for(r=t;r<t+n;r++)
    {
        sum = sum + *r;
    }
    return sum;
}

int* memory(int n)
{
    int *s=(int*)malloc(n * sizeof(int));
    return s;
}

int main()
{
    int n,*p,*q;
    printf("Enter the no.of elements in the array: ");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("Invalid input\n");
        printf("Enter the number of elements: ");
        scanf("%d",&n);
    }
    p= memory(n);
    if(p==NULL)
    {
        printf("Memory is not sufficient");
        return EXIT_FAILURE;
    }
    else {
    printf("Enter the array elements : ");
    for(q=p;q<p+n;q++)
    {
        scanf("%d",q);
    }
}
int total = sum(p,n);
int avg=average(n,total);
int min = findmin(p,n);
int max = findmax(p,n);

printf("Sum of array elements : %d\n",total);
printf("Average of array elements : %d\n",avg);
printf("Minimum value in array : %d\n",min);
printf("Maximum value in array : %d\n",max);

free(p);
return 0;
}