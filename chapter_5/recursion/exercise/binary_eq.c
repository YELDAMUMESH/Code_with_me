//find the binary equivalent of a given number

#include <stdio.h>

// Recursive function to print the binary equivalent of a number
void binaryEquivalent(int n) {
    if (n == 0) return; // Base condition

    binaryEquivalent(n / 2); // Recursive call (dividing by 2)

    printf("%d", n % 2); // Print remainder (binary digit)
}

int main() {
    int num;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Edge case for zero
    if (num == 0) {
        printf("Binary equivalent: 0\n");
    } else {
        printf("Binary equivalent: ");
        binaryEquivalent(num); // Function call
        printf("\n");
    }

    return 0;
}
