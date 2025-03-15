#include<stdio.h>

void tower(int n,char s,char h,char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("Move disk from %c to %c\n",s,d);
    tower(n-1,h,s,d);
    return;
}

int main()
{
    int n;
    char s='A',h='B',d='C';
    printf("Enter the value of n: ");
    scanf("%d",&n);
    tower(n,s,h,d);

return 0;
}