#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);  // use %u for unsigned int

    if ((num & 1) == 1)
        printf("%u is Odd\n", num);
    else
        printf("%u is Even\n", num);
    
    return 0;
}

