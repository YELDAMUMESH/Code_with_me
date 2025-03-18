/*
ABCDEFGHI
ABCD FGHI
ABC   GHI
AB     HI
A       I

*/

#include<stdio.h>
int main()
{
    int i,j,k,t,n,nsp=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=65;


    for(t=1;t<=2*n+1;t++) // for printing 1st line (ABCDE....2(n)+1)
    {
        printf("%c",a);
        a++;
    }
    printf("\n");

    for(i=1;i<=n;i++)
    {
        int a=65;
        for(j=1;j<=n+1-i;j++) // printing left side ABC.... in assending order
        {
            printf("%c",a);
            a++;
        }


        for(k=1;k<=nsp;k++) // printing middle part spaces (_ ___ ______)--> nsp inceasing by 2
        {
            printf(" ");
            a++;
        }
        nsp=nsp+2;


        for(j=1;j<=n+1-i;j++) // printing right side FGH.... in assending order
        {
            printf("%c",a);
            a++;
        }

        printf("\n");

    }


    return 0;
}