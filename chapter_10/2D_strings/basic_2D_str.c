#include <stdio.h>
#include <string.h>

int main()
{
    char str[3][7]={"Umesh","Thanuj","Jyothi"};
    char *p;
    p=&str[0][0];
    int i,j;
    i=0,j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("%c",*(p+(i*7+j)));
        }
        printf("\n");
    }
    
    p=&str[0][0]; int count=0;
    
    for(int k=0;k<7*3;k++)
    {
        if(count%7==0)
        {
            printf("\n");
        }
        printf("%c",*p);
        count++;
        p++;
    }
    printf("\n");
    return 0;
}