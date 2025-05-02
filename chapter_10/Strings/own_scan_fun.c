#include <stdio.h>
#include <string.h>
# define MAX_LENGTH 100

int main()
{
    char str[MAX_LENGTH],*p,ch;
    p=str;
    
    printf("Enter any string: ");
    
    while((ch=getchar())!='\n')
    {
        if(p<str+sizeof(str)-1)
        {
            *p=ch;
            p++;
        }
    
    }
    
    printf("%s\n",str);

    return 0;
}