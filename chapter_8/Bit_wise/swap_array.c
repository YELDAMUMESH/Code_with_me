#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p;

    printf("Enter %d elements:\n", n);
    for (p = arr; p < arr + n; p++) {
        scanf("%d", p);
    }

    printf("Original array: ");
    for (p = arr; p < arr + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    // Swapping adjacent elements using XOR
    for (p = arr; p < arr + n - 1; p += 2) {
        *p = *p ^ *(p + 1);
        *(p + 1) = *p ^ *(p + 1);
        *p = *p ^ *(p + 1);
    }

    printf("After swapping adjacent elements: ");
    for (p = arr; p < arr + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}
