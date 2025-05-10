
//C Program for Median of two sorted arrays

#include <stdio.h>
#include <stdlib.h>
void display(int *r,int n);


void median(int *r,int avg)
{
    int first=avg-1;
    int sec= avg;
    printf("1st middle element: %d\n",*(r+first));
    
    printf("2nd middle element: %d\n",*(r+sec));
    
    float Median;
    Median = (*(r+first)+*(r+sec))/2.0;
    printf("Median of the array: %.2f\n",Median);
}


void bubble(int *r,int n)
{
    int *p,*q;
    
    for(p=r;p<r+n-1;p++)
    {
        for(q=r;q<r+n-(p-r)-1;q++)
        {
            if(*q>*(q+1))
            {
                *q= *q ^ *(q+1);
                *(q+1)= *q ^ *(q+1);
                *q= *q ^ *(q+1);
            }
        }
    }
}


void display(int *r,int n)
{
    for(int *p=r;p<r+n;p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    
}



void combine(int *r,int *t, int tot)
{
    
   int *p = t + tot/2;
   for (int *q = r; q < r + tot/2; q++, p++) 
   {
    *p = *q;
   }
    printf("After combining: ");
    display(t,tot);
}



void input(int *r,int n)
{
    for(int *p=r;p<r+n;p++)
    {
        scanf("%d",p);
    }
}



int* memory(int n)
{
    int *p;
    p =(int*)malloc(n*sizeof(int));
    return p;
}

int main() {
    int n1,n2,*m1,*m2,*m3;
    printf("Enter the number of elements: ");
    scanf("%d",&n1);
    n2=n1;
    //Memory allocation
    m1= memory(n1);
    m2= memory(n2);
    
    if(m1==NULL || m2==NULL)
    {
        printf("Memory allocation failed!!\n");
        return EXIT_FAILURE;
    }
    
    //Receiving input from user
    printf("Enter the elements of 1st array: ");
    input(m1,n1);
    printf("Enter the elements of 2nd array: ");
    input(m2,n2);
    
    //Combing both arrays
    m3=(int*)realloc(m2,(n1+n2)*sizeof(int));
    combine(m1,m3,n1+n2);
    
    //sorting an arrays
    bubble(m3,n1+n2);
    printf("After sorting: ");
    display(m3,n1+n2);
    
    //Finiding median
    int avg;
    avg=(n1+n2)/2;
    median(m3,avg);
    
    //Freeing Memory
    free(m1);
    m1=NULL;
    free(m3);
    m3=NULL;
    
    return 0;
}