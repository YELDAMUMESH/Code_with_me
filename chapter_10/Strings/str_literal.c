#include<stdio.h>
int main()
{

    char arr[]="Hello World";
    char *p=arr;
    char a='m';
    for(p;p<arr+sizeof(arr)/sizeof(arr[0])-1;p++)
    {
        if(*p=='l')
        {
            *p=a;
        }
        printf("%c",*p);
    }
    printf("\n");
    char *ptr="Hello World";
    char *q=ptr;
    for(q;q<ptr+sizeof(arr)/sizeof(arr[0]);q++)
    {
        if(*q=='l')
        {
            *q=a;
        }
        printf("%c",*q);
    }
    printf("\n");
    // The above code will not work as expected because string literals are read-only
    // and attempting to modify them results in undefined behavior.
    // The correct way to handle string literals is to use a character array.

return 0;
}