#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter a number: ");
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++){
    char a = 65;
    for(j=1;j<=n+1-i;j++){
        printf("%c ",a);
        a++;
    }
    printf("\n");
}
return 0;
}