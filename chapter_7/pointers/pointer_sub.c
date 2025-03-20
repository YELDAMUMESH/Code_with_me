#include<stdio.h>
int main()
{
    int a[5] = {2, 4, 6, 8, 10};
    int *ptr;
    int l=sizeof(a)/sizeof(a[1]);
    ptr = &a[l-1];
    printf("The length of array is %d\n",l);
    for(int i=0;i<l;i++)
    {
        printf("The element in a[%d] is %d and address is ",i, *ptr); // Print the value pointed to by ptr
        printf("%p\n",(void*)ptr);
        ptr-=1; // pointer subtraction

    }
    printf("\n");

    return 0;
}

