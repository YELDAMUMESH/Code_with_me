#include<stdio.h>

void Array_Indexing(int marks[],int n)
{
    int i;
    printf("Finding indexes using array indexing: ");
    for(i=0;i<n;i++)
    {
        if(marks[i]<50)
        printf("%d ",i);
    }
    printf("\n");
    return;
}

void Pointer_Arthematic(int marks[],int n)
{
    int *p;
    printf("Finding indexes using pointer arthematic: ");
    for(p=marks;p<marks+n;p++)
    {
        if(*p<50)
        printf("%ld ",p-marks);
    }
    printf("\n");
    return;

}

int main()
{

    int marks[10]={82,34,96,43,90,48,95,44,99,40};
    Array_Indexing(marks,10);
    Pointer_Arthematic(marks,10);
    
return 0;
}