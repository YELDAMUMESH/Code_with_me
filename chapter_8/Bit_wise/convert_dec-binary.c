#include <stdio.h>

int main()
{
    int a;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Size of variable 'a' in bytes: %zu\n", sizeof(a));
    printf("Size in bits:\n");

    unsigned char *byte_ptr = (unsigned char*)&a; // FIX: cast to unsigned char*

    for (int i = sizeof(a) - 1; i >= 0; i--) // Start from highest byte
    {
        printf("  %2d    |  %02X   | ", i, byte_ptr[i]); // Address and HEX value

        for (int bit = 7; bit >= 0; bit--)
        {
            printf("%d", (byte_ptr[i] >> bit) & 1);
            if (bit % 4 == 0) printf(" ");  // space after every 4 bits
        }
        printf("\n");
    }
    
    return 0;
}

