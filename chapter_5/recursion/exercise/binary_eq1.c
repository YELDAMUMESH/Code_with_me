#include <stdio.h>

// Iterative function to print the binary equivalent of a number
void binaryEquivalent(int n) {
    int binary[32]; // Array to store binary digits
    int index = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    // Storing remainders (binary digits) in array
    while (n > 0) {
        binary[index++] = n % 2;
        n /= 2;
    }

    // Printing binary digits in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int num;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Binary equivalent: ");
    binaryEquivalent(num);
    printf("\n");

    return 0;
}
