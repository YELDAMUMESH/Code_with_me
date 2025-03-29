#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[100];
    
    // Initialize random seed
    srand(time(NULL));

    // Fill array with random values from 0 to 9999
    for (int i = 0; i < 100; i++) {
        a[i] = rand() % 10000;
    }

    int max = a[0], *p, *max_ptr;
    int n = sizeof(a) / sizeof(a[0]);

    max_ptr = a; // Assume first element is the maximum initially

    for (p = a; p < a + n; p++) {
        if (*p > max) {
            max = *p;
            max_ptr = p; // Store the pointer to the maximum element
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Index of the maximum element: %d\n", (int)(max_ptr - a));  // Fixed %d format
    printf("Memory address of minimum element: %p\n",max_ptr);

    return 0;
}

