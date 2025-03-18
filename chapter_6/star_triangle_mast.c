#include<stdio.h>
int main()
{
int n,i,j,k;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++) // for no.of lines
{
    for(j=1;j<=n-i;j++) // for spaces
    {
        printf(" ");
    }
        
    for(k=1;k<=i;k++) // for star triangle
    {
        printf("*");
    }
    
    printf("\n");
}
return 0;
}