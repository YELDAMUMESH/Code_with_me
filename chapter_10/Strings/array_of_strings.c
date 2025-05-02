#include <stdio.h>
#include <string.h>

int main()
{
    char *str[]={"Umesh","Thanuj","Jyothi"};
    char **q;
    char *c;
    for(q=str;q<(3+str);q++)
    {
        c=*q;
        while(*c!='\0')
        {
            printf("%c",*c);
            c++;
        }
        putchar('\n');
    }

    return 0;
}