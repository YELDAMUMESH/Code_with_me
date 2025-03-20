#include <stdio.h>

// Function to print Fibonacci series up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);

    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;

    // Input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms < 1) {
        printf("Please enter a positive integer greater than zero.\n");
    } else if (terms == 1) {
        printf("Fibonacci Series: 0\n");
    } else {
        fibonacci(terms);
    }

    return 0;
}
