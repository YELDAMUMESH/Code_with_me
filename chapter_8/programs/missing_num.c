// C Program for Find the Missing Number


#include<stdio.h>
#include<stdlib.h>


int miss(int max,int min)
{
    int sum=0;
    for(int i=min;i<=max;i++)
    {
        sum=sum+i;
    }
    return sum;
}




int max_num(int *r,int n,int *s,int *m)
{
    int *p=r;
    int max=*r;
    *m=*r;
    
    while(p<r+n)
    {
        *s=*s+*p;
        if(*p>max)
        {
            max=*p;
        }
        
        if(*p<*m)
        {
            *m=*p;
        }
        p++;
    }
    
    return max;
    
}



void input(int *p,int n)
{
    int *q;
    printf("Enter %d array elements: ",n);
    for(q=p;q<p+n;q++){
    scanf("%d",q);
    }
    return;
}

int main()
{
    int n;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    int max,miss_sum,min;
    int sum=0;
    //memory allocation
    int *m;
    m=(int*)calloc(n,sizeof(int));
    
    if(m==NULL)
    {
        printf("Memory allocation failed !!!\n");
        return EXIT_FAILURE;
    }
    
    //Input function call
    input(m,n);
    
    //Largest number
    max=max_num(m,n,&sum,&min);
    printf("Largest element: %d\n",max);
    printf("Smallest element: %d\n",min);
    printf("Sum of the array elements: %d\n",sum);
    
    //Finding missing elements
    miss_sum=miss(max,min);
    printf("Sum of numbers from %d to %d = %d\n",min,max,miss_sum);
    int miss_ele=miss_sum-sum;
    printf("Missing element: %d\n",miss_ele);
    
    free(m);
    m=NULL;
    
    return 0;
}