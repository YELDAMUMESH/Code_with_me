#include<stdio.h>
int main()
{

    char a[]="Hello";
    char *const p=a;
    *p='h'; 

    // This is allowed because p is a pointer to a non-const char
    // and we are modifying the value at the address it points to.

    printf("%s\n",p);
    for(p;p<a+sizeof(a)/sizeof(a[0]);p++) // We cannot perform p++ because p is a const pointer. Hence this program pops error.
    {
        printf("%c",*p);
    }
    printf("\n");

return 0;
}