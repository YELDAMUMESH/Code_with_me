#include<stdio.h>
int main()
{

    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int r1,c1,r2,c2;
    printf("Enter starting co-ordinates of rectangle: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter ending co-ordinates of rectangle: ");
    scanf("%d %d",&r2,&c2);
    if(r1 < 0 || r2 >= r || c1 < 0 || c2 >= c || r1 > r2 || c1 > c2)
    {
    printf("Invalid rectangle\n");
    return 1;
    }

    else
    {
        printf("The rectangle elements are:\n");
        for(int i = r1; i <= r2; i++)
        {
            for(int j = c1; j <= c2; j++)
            {       
                printf("%d ", arr[i][j]);
            }
                printf("\n");
        }

        int sum=0;
        for(int i=r1;i<=r2;i++)
        {
            for(int j=c1;j<=c2;j++)
            {
                sum=sum+arr[i][j];
            }
        }
        printf("Sum of elements in the rectangle is: %d\n",sum);
    }

    
    return 0;

}