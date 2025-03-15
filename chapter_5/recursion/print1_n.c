#include<stdio.h>
void printnum(int n){
    if(n==0) return;
    printf("%d\n",n);
    printnum(n-1);
    printf("%d\n",n);
    return;
}



int main()
{

    int n;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    printnum(n);
return 0;
}