#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int *b=(int*)malloc(n*sizeof(int));
    if(b==NULL)
    {
        printf("Memory not allocated.\n");
        exit(1);
    }
    else
    {
        printf("Please enter integer values : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",b+i);
        }
        printf("\n");

    }

    printf("Elements entered and there memory locations are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d - ",*(b+i));
        printf("%p\n",(b+i));
    }

    printf("\n");
    free(b);

return 0;
}