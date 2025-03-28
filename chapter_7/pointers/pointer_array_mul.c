#include <stdio.h>

void multiplication(int b[], int len)
{
    int multi = 1, *r;
    
    for(r = b; r < b + len; r++) 
    {
        multi = multi * (*r);
    }
    
    printf("\nMultiplication result: %d\n", multi);
}



int main()
{
    int array[100], *p, n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    
    printf("Enter the array elements: ");
    
    for(p = array; p < array + n; p++)
    {
        scanf("%d", p);
    }
    
    printf("Array elements are: ");
    
    for(p = array; p < array + n; p++)
    {
        printf("%d ", *p);
    }
    
    multiplication(array, n);
    
    return 0;
}
