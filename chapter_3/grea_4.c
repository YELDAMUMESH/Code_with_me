#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the values of a,b,c,d: ");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
{
    printf("a is greater\n");
}
else if(b>a && b>c && b>d)
{
printf("b is greater\n");
}
else if(c>a && c>b && c>d)
{
printf("c is greater\n");
}
else
{
printf("d is greater\n");
}

return 0;
}