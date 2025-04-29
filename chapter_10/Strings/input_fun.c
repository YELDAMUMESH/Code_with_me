#include<stdio.h>

int input(char *str, int n)
{
    int i;
    printf("Enter a string: ");
    for(i=0; i<n; i++)
    {
        str[i] = getchar();
        if(str[i] == '\n')
            break;
    }
    str[i] = '\0'; // Null-terminate the string
    return i; // Return the length of the string
}

int main()
{
    char str[100];
    int n= input(str,10);
    printf("The string is: %s\n", str);
    printf("The length of the string is: %d\n", n);

return 0;
}