#include <stdio.h>

// Function to print prime factors
void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);

    // Divide by 2 until n becomes odd
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

    // Check for odd numbers starting from 3
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2)
        printf("%d", n);

    printf("\n");
}

int main() {
    int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle edge cases
    if (num <= 1) {
        printf("No prime factors for numbers less than or equal to 1.\n");
    } else {
        primeFactors(num);
    }

    return 0;
}
