#include <stdio.h>

// Optimized Tower of Hanoi function
void towerOfHanoi(int n, char source, char helper, char destination) {
    if (n == 0) return; // Base case: No disk to move

    // Step 1: Move n-1 disks from Source to Helper using Destination
    towerOfHanoi(n - 1, source, destination, helper);

    // Step 2: Move the nth disk directly from Source to Destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Step 3: Move n-1 disks from Helper to Destination using Source
    towerOfHanoi(n - 1, helper, source, destination);
}

int main() {
    int n;

    // Input the number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Perform the Tower of Hanoi
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
