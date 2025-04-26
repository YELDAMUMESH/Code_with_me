#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p,*q;

    printf("Enter %d elements:\n", n);
    for (p = arr; p < arr + n; p++) {
        scanf("%d", p);
    }

    printf("Original array: ");
    for (p = arr; p < arr + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    // Reversing the array using XOR
    for (p = arr,q=arr+n-1; p<q; p++,q--) {
        *p=*p^*q;
        *q=*p^*q;
        *p=*p^*q;
    }

    printf("After reversing the array : ");
    for (p = arr; p < arr + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}
