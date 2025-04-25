#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
   // gets(str); // Dangerous and should not be used
    fgets(str,sizeof(str),stdin); // best alternate for gets()
    printf("Entered string: ");
    puts(str);

return 0;
}