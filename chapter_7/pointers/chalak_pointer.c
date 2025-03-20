#include <stdio.h>
int main()
{
    int a[100], n, *p = a;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid input! Array size should be between 1 and 100.\n");
        return 1;
    }

    printf("\nEnter array elements: ");
    for (; p < a + n; p++)
    {
        scanf("%d", p);  // Corrected this line
    }

    printf("\nArray elements are: ");
    for (p = a; p < a + n; p++)
    {
        printf("%d ", *p);  // Corrected this line
    }

    printf("\n");

    return 0;
}
