#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], *p, str2[10], *q;
    int count1 = 0, count2 = 0;  // Initialize counts to 0

    printf("Enter the string 1: ");
    fgets(str1, sizeof(str1), stdin);
    p = str1;

    // Count the characters in str1
    while (*p != '\n' && *p != '\0') {
        p++;
        count1++;
    }
    *p = '\0';  // Replace newline with null terminator

    printf("Enter the string 2: ");
    fgets(str2, sizeof(str2), stdin);
    q = str2;

    // Count the characters in str2
    while (*q != '\n' && *q != '\0') {
        q++;
        count2++;
    }
    *q = '\0';  // Replace newline with null terminator

    // Compare the lengths first
    if (count1 != count2) {
        printf("Strings are not identical\n");
    } else {
        // Now compare characters one by one
        p = str1;
        q = str2;
        while (*p != '\0' && *q != '\0') {
            if (*p != *q) {
                printf("str1 and str2 are not same differ at str[%ld]\n", p - str1);
                break;
            }
            p++;
            q++;
        }
        if (*p == '\0' && *q == '\0') {
            printf("Strings are identical\n");
        }
    }

    return 0;
}
