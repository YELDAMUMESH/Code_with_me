
//C Program for Majority Element

#include <stdio.h>
#include <stdlib.h>


void major(int *r, int n)
{
    int visited[n];
    for (int i = 0; i < n; i++)
        *(visited + i) = 0;
        
        int *p,*q;

    for (p=r; p < r+n; p++)
    {
        if (*(visited + (p-r)))
            continue;

        int count = 1;
        for (q= p + 1; q< r+n; q++)
        {
            if(*p == *q)
            {
                count++;
                *(visited + (q-r)) = 1;
            }
        }

        if (count >= 2)
        {
            printf("%d repeated %d times\n", *(p), count);
        }
    }
}





void input(int *p,int n)
{
    printf("Enter %d array elements: ",n);
    for(int *q=p;q<p+n;q++)
    {
        scanf("%d",q);
    }
    return;
}


int main()
{
    int n,res;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    else
    {
        printf("Memory allocated successfully\n");
    }
    input(p,n);
    major(p,n);
    //Freeing the allocated memory
    free(p);
    p=NULL;
    printf("Memory freed successfully\n");
   
    
    
    return 0;
    
}