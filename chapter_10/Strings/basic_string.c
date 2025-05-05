#include <stdio.h>
#include <string.h>

void fun2(char **s1, char **s2)
{
    char *temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}

void fun1(char *s1,char* s2)
{
    char *temp;
    temp=s1;
    s1=s2;
    s2=temp;
}

int main()
{
    char *str1="Hello";
    char *str2="Bye";
    
    printf("Address of 1st letter in Hello : %p\n",&str1[0]);
    printf("Address of 1st letter in Bye : %p\n",&str2[0]);
    printf("Pointer str1 is pointing to : %p\n",str1);
    printf("Pointer str2 is pointing to : %p\n",str2);
    printf("Address of str1 : %p\n",&str1);
    printf("Address of str2 : %p\n",&str2);
    fun1(str1,str2);
    printf("%s %s\n",str1,str2);
    fun2(&str1,&str2);
    printf("%s %s\n",str1,str2);
    return 0;
    
}

