#include<stdio.h>
#include<string.h>
// This program copies a string using the strcpy function
int main()
{

    char str1[10], str2[10];
    char str3[]="Namasthe";
    char str4[10];
    strcpy(str4, str3);
    printf("Enter a string: ");
    int i=0;
    for(; i<9; i++)
    {
        str1[i] = getchar();
        if(str1[i] == '\n')
        break;
    }
    str1[i] = '\0'; // Null-terminate the string
    printf("Copying the string...\n");
    strcpy(str2, str1);
    printf("%s\n",str4);
    printf("%s\n", str2);
return 0;
}