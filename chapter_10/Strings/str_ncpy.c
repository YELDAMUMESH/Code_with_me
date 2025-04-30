#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[20];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // ✅ Remove newline

    strncpy(str2, str1, sizeof(str2) - 1);
    str2[sizeof(str2) - 1] = '\0'; // Ensure null termination

    printf("The second string is: %s\n", str2);

    return 0;
}
