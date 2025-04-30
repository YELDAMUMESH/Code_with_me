#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    char ch;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n' && i < 99) {  // Read until Enter is pressed or limit reached
        str[i++] = ch;
    }

    str[i] = '\0';  // Null-terminate the string

    printf("You entered: %s\n", str);

    return 0;
}
