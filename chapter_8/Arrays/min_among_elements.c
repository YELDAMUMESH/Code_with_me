#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void find_min_random(int array[], int n) {
    int *p, *ptr_min;
    srand(time(NULL));

    // Fill the array with random numbers
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 1000; // Numbers from 0 to 99
    }

    // Initialize minimum value after filling the array
    ptr_min = array;
    int min = array[0];

    // Find the minimum value using pointers
    for (p = array; p < array + n; p++) {
        if (*p < min) {
            min = *p;
            ptr_min = p;
        }
    }

    printf("Minimum element is: %d\n", min);
    printf("Index of minimum element: %ld\n", ptr_min - array);
    printf("Memory address of minimum element: %p\n",ptr_min);
}

int main() {
    int a[100];
    int n = sizeof(a) / sizeof(a[0]);
    find_min_random(a, n);
    return 0;
}



