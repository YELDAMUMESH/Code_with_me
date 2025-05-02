#include <stdio.h>
#include <string.h>

int main()
{
    char str1[11], str2[6], *p, *q;
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Entered string is: \n");
    p = str1;
    while (*p != '\0')
    {
        putchar(*p);
        p++;
    }
    putchar('\n');

    printf("Copying string from str1 to str2: \n");
    p = str1;
    q = str2;

    while (*p != '\0' && (q - str2) < sizeof(str2) - 1) // prevent overflow
    {
        *q = *p;
        q++;
        p++;
    }
    *q = '\0';  // null-terminate str2

    q = str2;
    while (*q != '\0')
    {
        putchar(*q);
        q++;
    }
    putchar('\n');

    return 0;
}
