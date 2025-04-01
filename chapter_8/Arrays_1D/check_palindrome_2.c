#include<stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    int *left = a;
    int n = sizeof(a) / sizeof(a[0]);
    int *right = a + n - 1;
    int palindrome = 1;  // Assume the array is a palindrome

    while (left < right)
    {
        if (*left != *right)  // Check if elements are different
        {
            palindrome = 0;  // Set flag to false
            break;  // No need to check further
        }
        left++;
        right--;
    }

    if (palindrome)
    {
        printf("Array is a palindrome\n");
    }
    else
    {
        printf("Array is NOT a palindrome\n");
    }

    return 0;
}
