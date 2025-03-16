//Program to print number square 
/*

12345
12345
12345
12345

*/


#include<stdio.h>
int main()
{
int n,m,i,j;
printf("Enter no.of rows and columns: ");
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++) // for no.of rows
{
    for(j=1;j<=m;j++) // for no.of columns
    {
        printf("%d ",j);
        
    }
    printf("\n");
}
return 0;
}