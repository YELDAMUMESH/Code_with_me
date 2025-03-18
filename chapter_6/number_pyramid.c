#include<stdio.h>
int main()
{
int n,i,j,k;
printf("Enter the value of n: ");
scanf("%d",&n);

for(i=1;i<=n;i++) // no.of lines
{
    int a =1;
    for(j=1;j<=n-i;j++) // no.of spaces
    {
        printf(" ");
    }
    for(k=1;k<=2*i-1;k++) // no.of numbers
    {
        printf("%d",a);
        a++;
    }
    printf("\n");
}
return 0;
}