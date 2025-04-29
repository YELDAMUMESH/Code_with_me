#include<stdio.h>

void toggle(unsigned int* num, unsigned int* pos, int size)
{
    for (int i = 0; i < size * 8; i++)  // Loop through all bits
    {
        if (pos[i] != -1)  // Only toggle valid positions
        {
            *num ^= (1 << pos[i]);
        }
    }
}

void set(unsigned int* num, unsigned int* pos, int size)
{
    for (int i = 0; i < size * 8; i++)  // Loop through all bits
    {
        if (pos[i] != -1)  // Only set valid positions
        {
            *num |= (1 << pos[i]);
        }
    }
}

void clear(unsigned int* num, unsigned int* pos)
{
    for (int i = 0; i < sizeof(*num) * 8; i++)  // Loop through all bits
    {
        if (pos[i] != -1)  // Only clear valid positions
        {
            *num &= ~(1 << pos[i]);
        }
    }
}

void display(unsigned int num)
{
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--)  // Display bits from most significant to least
    {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
}

int main()
{
    unsigned int num, low, up;
    printf("Enter the value of num: ");
    scanf("%u", &num);
    printf("Before clearing bits: \n");
    display(num);

    signed int pos[sizeof(num) * 8];  // Array for bit positions
    printf("Enter the lower limit and upper limit (0-%zu): ", sizeof(num) * 8 - 1);
    scanf("%u %u", &low, &up);

    // Initialize pos array with positions to modify
    for (int i = 0; i < sizeof(num) * 8; i++)  // Loop through all bits
    {
        if (i >= low && i < up)
            pos[i] = i;  // Valid positions for modification
        else
            pos[i] = -1;  // Invalid positions
    }


    set(&num, pos, sizeof(num));
    printf("After setting bits: \n");
    display(num);

    printf("After clearing bits: \n");
    clear(&num, pos);
    display(num);
    
    toggle(&num, pos, sizeof(num));
    printf("After toggling bits: \n");
    display(num);

    // Print pos array to show which positions were modified
    for (int i = 0; i < sizeof(num) * 8; i++)
    {
        printf("%d ", pos[i]);
    }
    printf("\n");

    return 0;
}

