#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter value of n: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=1;j<n+1-i;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
}
return 0;
}