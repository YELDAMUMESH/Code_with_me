#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

    char buffer[100];
    char *p = buffer;
    printf("Enter a string: ");
    fgets(buffer,sizeof(buffer),stdin);

    // Remove newline character if present
    buffer[strcspn(buffer, "\n")] = '\0';

    // Manually compute string length (your own strlen)
    int length = 0;
    while (buffer[length] != '\0') {
    length++;
    }
    p = malloc(length + 1);  // +1 for null terminator
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    strcpy(p, buffer);
    int count=0;char *temp=p;
    while(*p != '\0')
    {
        printf("%c", *p);
        count++;
        p++;
    }
    printf("\nLength of the string is: %d\n", count);
    // Free the allocated memory
    free(temp);
    temp = NULL; // Avoid dangling pointer


return 0;
}