#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "Namasthe";
    char str2[10], str3[10], str4[10];
    int i = 0;

    printf("Enter a string: ");
    for (; i < 9; i++) {
        str3[i] = getchar();
        if (str3[i] == '\n')
            break;
    }
    str3[i] = '\0'; // Null-terminate

    printf("Copying the string...\n");

    strcpy(str4, strcpy(str2,str3)); // Copy user input into str4

    printf("%s\n", str1);
    printf("%s\n", str4);

    return 0;
}
