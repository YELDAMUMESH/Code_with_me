#include <stdio.h>

int memo[1000]; // Array to store results

int stair(int n) {
    if (n == 1 || n == 2) return n;
    if (memo[n] != 0) return memo[n]; // Return precomputed value
    return memo[n] = stair(n-1) + stair(n-2); // Store and return
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d\n", stair(n));
    return 0;
}
