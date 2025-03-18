/*

*********
**** ****
***   ***
**     **
*       *    

*/

#include<stdio.h>
int main()
{
int n,i,j,t,k;
int nsp=1;
printf("Enter a number: ");
scanf("%d",&n);

for(t=1;t<=2*n+1;t++) // for printing top layer (*********)
{
    printf("*");
}
printf("\n");


for(i=1;i<=n;i++) // no.of lines
{
    for(j=1;j<=n+1-i;j++) // for printing left decreasing stars (**** *** ** *)
    {
        printf("*");
    }

    for(k=1;k<=nsp;k++)
    {
        printf(" ");
    }

    nsp=nsp+2;

    for(j=1;j<=n+1-i;j++) // for printing right decreasing stars (**** *** ** *)
    {
        printf("*");
    }


    printf("\n");


}
return 0;
}