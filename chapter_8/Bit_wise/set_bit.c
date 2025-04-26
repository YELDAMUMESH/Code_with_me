#include <stdio.h>
int main() {
    unsigned int num;
    unsigned int pos;
    printf("Enter the value: ");
    scanf("%u",&num);
    printf("Enter the position you want to set: ");
    scanf("%u",&pos); 
    printf("Before setting bit: \n");

    // Decimal to binary displayer//
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // spacing for readability
    }
    printf("\n");

    printf("After setting the bit: \n");
    num |= (1 << pos);  // Set bit
    printf("Result = %u\n", num);
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // spacing for readability
    }
    printf("\n");
    return 0;
}
