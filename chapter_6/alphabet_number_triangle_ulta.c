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
        if(i%2==1){
            printf("%c ",a);
        }
        else
        printf("%d ",j);
        a++;
    }
    printf("\n");
}
return 0;
}