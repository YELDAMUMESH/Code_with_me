#include<stdio.h>
#include<stdlib.h>
int main()
{

    int r,c,*p,*q;
    printf("Enter the number of rows & columns: ");
    scanf("%d %d",&r,&c);
    while(r<=0 || c<=0)
    {
        printf("Invalid input\n");
        printf("Enter the +ve number of rows & columns: ");
        scanf("%d %d",&r,&c);
    }
    p=malloc((r*c)*sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return EXIT_FAILURE;
    }
    
    printf("Enter %d array elements: ",r*c);
    for(q=p;q<p+r*c;q++)
    {
        scanf("%d",q);
    }
    printf("Array elements in %d X %d format is: \n",r,c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", p[i * c + j]);  // Access the element in row i and column j
        }
        printf("\n");  // New line after each row
    }
    printf("\n");
    free(p);
return 0;
}