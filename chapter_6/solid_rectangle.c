// Program to print solid rectangle 

/* 

****
****
****

*/


#include<stdio.h>
int main()
{
int i,j,n,m;
printf("Enter the number of rows and columns: ");
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++) // runs loop for n times
{
    for(j=1;j<=m;j++) // runs loop for m times
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}