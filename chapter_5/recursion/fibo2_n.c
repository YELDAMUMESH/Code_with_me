#include <stdio.h>

int memo[1000]; // Array to store computed Fibonacci values

int fibo(int n) {
    if (n == 1 || n == 2) return 1;
    if (memo[n] != 0) return memo[n]; // Return stored value if already calculated
    return memo[n] = fibo(n-1) + fibo(n-2); // Store and return computed value
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("%d\n", fibo(n)); // Print nth Fibonacci number
    return 0;
}
