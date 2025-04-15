#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {  // ❌ Logic bug: should be i < size
        total += arr[i];
    }
    return total;
}

int main() {
    int *nums = malloc(3 * sizeof(int));  // Allocate space for 3 ints

    if (nums == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int result = sum(nums, 3);  // ❌ Using freed memory

    printf("Sum is: %d\n", result);
    return 0;
    free(nums);
}
