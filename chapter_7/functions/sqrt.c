

// to link math.h library we have to use -lm flag as below
// gcc sqrt.c -o a.out -lm


#include<stdio.h>
#include<math.h>
int main()
{
    int a,root;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    root=sqrt(a);
    printf("Square root of %d is: %d\n",a,root);

return 0;
}