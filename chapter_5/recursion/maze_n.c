#include<stdio.h>

int maze2(int n, int m){
    int RW=0,DW=0;
    if(n==1 && m==1) return 1;
    if(n==1) RW+= maze2(n,m-1);
    if(m==1) DW+= maze2(n-1,m);
    if(n>1 && m>1){
        RW+= maze2(n,m-1);
        DW+= maze2(n-1,m);
    }
    return RW+DW;
}


int main()
{

    int r,c;
    printf("Enter the values of rows and coloumns: ");
    scanf("%d%d",&r,&c);
    printf("%d\n",maze2(r,c));
return 0;
}