// Counting first 4 natural numbers using do while loop

#include<stdio.h>
int main()
{
int i=1,n;
printf("Enter the number of natural numbers you want to count: ");
scanf("%d",&n);
do{
    printf("%d\n",i);
    i++;
}while(i<=n);
return 0;
}