#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    char *ptr = str;
    int count=0;
    while(*ptr != '\0') //check for null terminator
    {
        count++;
        ptr++;
    }
    printf("Length of the string is: %d\n", count);

return 0;
}