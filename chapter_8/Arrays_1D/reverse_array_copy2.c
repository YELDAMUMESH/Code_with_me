#include <stdio.h>

void display(int b[], int n)
{
    int *k;
    for(k = b; k < b + n; k++)
    {
        printf("%d ", *k);
    }
    printf("\n");
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10], *p, *q = b;

    int n = sizeof(a) / sizeof(a[0]);

    display(a, n);  // Display original array
    printf("\n");

    // Corrected logic for reversing the array
    for(p = a; p < a + n; p++)
    {
        *q = *(a + (n - 1 - (p - a)));  // Corrected reversal logic
        q++;  // Move 'q' forward in 'b'
    }

    display(b, n);  // Display reversed array
    return 0;
}
