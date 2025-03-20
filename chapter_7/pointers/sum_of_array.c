#include <stdio.h>

int main() {
    int a[100], sum = 0, n;
    int *p;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Correct pointer-based sum calculation
    for (p = &a[0]; p < &a[n]; p++) ////for(p=a;p<a+n;p++)////
    {
        sum += *p;
    }

    printf("\nSum of array elements is: %d\n", sum);

    return 0;
}
