#include <stdio.h>
#include <string.h>

int main()
{
    char str[10], *p;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  // Reads the input
    
    // If there is a newline character, replace it with \0
    p = str;
    while (*p != '\0') {
        if (*p == '\n') {
            *p = '\0';  // Replace newline with null terminator
            break;
        }
        p++;
    }
    
    printf("You have entered: ");
    
    p = str;
    // Print the string until we encounter the null terminator
    while (*p != '\0') {
        putchar(*p);
        p++;
    }
    putchar('\n');
    
    return 0;
}
