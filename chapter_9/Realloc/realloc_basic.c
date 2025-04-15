#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p, *q;
    printf("Please enter the size of array: ");
    scanf("%d", &n);
    
    while(n <= 0)
    {
        printf("Invalid!!!\n");
        printf("Please enter +ve value : ");
        scanf("%d", &n);
    }

    int *s = (int*)malloc(n * sizeof(int));
    if(s == NULL)
    {
        printf("Memory not allocated\n");
        return EXIT_FAILURE;
    }

    printf("Please enter %d elements of array: ", n);
    for(p = s; p < s + n; p++)
    {
        scanf("%d", p);
    }

    printf("You entered array is: ");
    for(p = s; p < s + n; p++)
    {
        printf("%d ", *p);
    }

    int m;
    printf("\nEnter the no.of elements to be added to the existing array : ");
    scanf("%d", &m);

    int *r = realloc(s, (n + m) * sizeof(int));
    if(r == NULL)
    {
        printf("Memory not allocated\n");
        free(s);
        return EXIT_FAILURE;
    }
    s = r;

    printf("Enter the new %d array elements: ", m);
    for(q = s + n; q < s + n + m; q++)
    {
        scanf("%d", q);
    }

    printf("The array after adding elements is: ");
    for(p = s; p < s + n + m; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");

    free(s);        // Free allocated memory
    s = NULL;       // Avoid dangling pointer by setting it to NULL
    return 0;
}
