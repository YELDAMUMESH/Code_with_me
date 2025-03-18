
/*

123456789
1234 6789
123   789
12     89
1       9   

*/


#include<stdio.h>
int main()
{
    int i,j,k,t,n,nsp=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(t=1;t<=2*n+1;t++) // for printing 1st line (123456789)
    {
        printf("%d",t);
    }
    printf("\n");

    for(i=1;i<=n;i++) // no .of lines
    {
        int a=1;

        for(j=1;j<=n+1-i;j++) // to print numbers in assending order
        {
            printf("%d",a);
            a++;
        }

        for(k=1;k<=nsp;k++) // to print no.of spaces
        {
            printf(" ");
            a++;
        }
        nsp=nsp+2;


    for(j=1;j<=n+1-i;j++) // to print numbers in decending order
    {
        printf("%d",a);
        a++;
    }

    printf("\n");


    }

return 0;
}