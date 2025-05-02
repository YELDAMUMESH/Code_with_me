#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20],str2[5],*p,*q;
    printf("Enter the string 1 : ");
    fgets(str1,sizeof(str1),stdin);
    p=str1,q=str2;
    while(*p!='\n')
    {
        p++; // moving pointer to the last char
    }
    *p='\0';
    printf("Enter the string 2 : ");
    fgets(str2,sizeof(str2),stdin);
    while(*q!='\n')
    {
        q++; // moving pointer to the last char
    }
    *q='\0';
    
    p=str1,q=str2;
    while(*p!='\0')
    {
        p++;// moving pointer to last char
    }
    
    printf("Attaching str2 to str1 : ");
    
    while(*q!='\0' && (p-str1)<sizeof(str1)-1)
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("%s\n",str1);

    return 0;
}

