#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    char *p;
    printf("Enter the number of elements in a string: ");
    scanf("%d",&n);
    getchar();
    p=(char*)malloc((n+1)*sizeof(char));
    printf("Enter the string: ");
    fgets(p,n+1,stdin);
    puts(p);
    free(p);


return 0;
}