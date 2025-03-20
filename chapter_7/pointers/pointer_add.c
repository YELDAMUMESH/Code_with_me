#include<stdio.h>
int main()
{
    int a[5] = {2, 4, 6, 8, 10};
    int *ptr;
    ptr = &a[0];
    for(int i=0;i<sizeof(a)/sizeof(a[1]);i++)
    {
        printf("%d - ", *ptr); // Print the value pointed to by ptr
        printf("%p\n",(void*)ptr);
        ptr+=1;

    }
    printf("\n");

    return 0;
}

