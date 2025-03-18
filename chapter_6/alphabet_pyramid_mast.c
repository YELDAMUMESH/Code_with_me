#include<stdio.h>
int main()
{
int n,i,j,k,l;
printf("Enter the value of n: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    int a=65;

    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }

    for(k=1;k<=i;k++)
    {
        printf("%c",a);
        a++;
    }


    a=a-2;

    for(l=1;l<i;l++)
    {
        printf("%c",a);
        a--;
        
    }
    
    printf("\n");
}
return 0;
}