#include <stdio.h>
#include <string.h>
# define MAX_LENGTH 100

int main()
{
    char str[MAX_LENGTH],*p,ch;
    p=str;;
    char str2[]="Enter any string: ";
    puts(str2);
    
    while((ch=getchar())!='\n')
    {
        if(p<str+sizeof(str)-1)
        {
            *p=ch;
            p++;
        }
    
    }
    *p='\0';

    p=str;
    
    //Display string
    
    while(*p!='\0')
    {
        putchar(*p);
        p++;
    }
    putchar('\n');
    

    return 0;
}