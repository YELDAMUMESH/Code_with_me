// Finding if n is lowercase or not

#include<stdio.h>
int main()
{
char ch;
printf("Enter the value of ch: ");
scanf("%c",&ch);
if(ch>=97 && ch<=122)
{
    printf("%c is lower case\n",ch);
}
else
{
    printf("%c is not lower case\n",ch);
}
printf("value of %c is %d\n",ch,ch);

return 0;
}