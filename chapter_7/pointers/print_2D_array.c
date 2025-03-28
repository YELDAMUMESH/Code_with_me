#include <stdio.h>

int main()
{
    int array[10][10], *p, r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Validate input dimensions
    if (r > 10 || c > 10 || r <= 0 || c <= 0) {
        printf("Invalid matrix size! Maximum allowed is 10x10.\n");
        return 1; // Exit program if input is invalid
    }

    printf("Enter array elements:\n");
    
    // Using pointer arithmetic for input
    for (p = &array[0][0]; p < &array[0][0] + (r * c); p++) {
        scanf("%d", p);
    }

    printf("\nElements entered are:\n");

    // Using pointer arithmetic for output in matrix format
    int count = 0;
    for (p = &array[0][0]; p < &array[0][0] + (r * c); p++) {
        printf("%d ", *p);
        count++;
        if (count % c == 0) // New line after each row
            printf("\n");
    }

    return 0;
}

