#include<stdio.h>
int main()
{

    unsigned int n,m;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Bit wise Add of n&m : %d\n",n&m);

return 0;
}

/*     16       8     4    2    1
    2x2x2x2x  2x2x2  2x2  2x1  2x0
       0        0     1    0    1  ------- 5    
       0        0     1    1    0  ------- 6

       0        0     1    0    0  ------- 5&6


*/