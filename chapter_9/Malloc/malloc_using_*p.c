#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p;

    printf("Please enter no.of elements in the array : ");
    scanf("%d",&n);

    int *s=(int*)malloc(n * sizeof(n)); // creating memory for the array elements

    if(s==NULL)
    {
        printf("Memory not allocated");
        exit(1);
    }

    else
    {
        printf("Please enter the elements of the array : ");
        for(p=s;p<s+n;p++)
        {
            scanf("%d",p);
        }

        printf("Array elements are : \n");
        for(p=s;p<s+n;p++)
        {
            printf("%d - ",*p);
            printf("%p\n",(int*)p);
        }
    }
    free(s);

return 0;
}