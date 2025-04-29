#include<stdio.h>
int main()
{

    char arr[]="Hello World";
    const char *p=arr;
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    printf("%s\n",arr);

    // Now below code will not work beause p is a pointer to a const char
    // and we are trying to modify the value at the address it points to.
    
    *p='h'; // This line will cause a compilation error
    printf("%s\n",arr);
return 0;
}