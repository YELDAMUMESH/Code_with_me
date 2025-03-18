#include<stdio.h>
int main()
{
int n,i,j;
printf("Please enter a odd number(n): ");
scanf("%d",&n);
if(n%2==1){
    for(i=1;i<=n;i++)
    {
        int d=n/2+1;
        for(j=1;j<=n;j++)
        {
            if(i==d||j==d)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
else
{
    printf("Entered number is not odd\n");

}
return 0;
}