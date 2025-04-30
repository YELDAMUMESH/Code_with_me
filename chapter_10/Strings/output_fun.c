
#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i=0;
    printf("Enter the string: ");
    while((ch=getchar())!='\n' && i<sizeof(str)-1)
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    
    char *p;
    p=str;
    
    while(*p!='\0')
    {
        putchar(*p);
        p++;
        
    }
    printf("\n");

    return 0;
}