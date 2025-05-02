#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main() 
{
    char str1[MAX_LENGTH];
    printf("Enter the string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")]='\0';
    char str2[MAX_LENGTH];
    strcpy(str2,str1);
    char *p;
    char *q;
    p=str1;
    printf("Original string: ");
    printf("%s\n",str1);
    int count=0;
    while(*p!='\0')
    {
        p++;
        count++;
    }
    
    p=str1;q=str1+(count-1);
    
    for(q=str1+(count-1);p<q;p++,q--)
    {
        char temp = *p;
        *p=*q;
        *q=temp;
    }
    printf("After reversing the string: ");
    printf("%s\n",str1);
    
    printf("Comparing original and reversed strings.....\n");
    
    if(strcmp(str1,str2)==0)
    {
        printf("The given string is a palindrome\n");
    }
    
    else
    {
        printf("Not a palindrome\n");
    }
    
    
    return 0;
}