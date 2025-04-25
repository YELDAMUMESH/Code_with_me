#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    char *p;

    printf("Enter the size of the string: ");
    scanf("%d", &n);
    getchar(); // <-- Consume the leftover '\n'

    p = (char *)malloc((n + 1) * sizeof(char)); // +1 for '\0'
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the string: ");
    fgets(p, n + 1, stdin); // read up to n characters

    printf("The string is: ");
    puts(p);

    free(p);
    return 0;
}
