#include <stdio.h>

int main()
{
    char a[2][3]={{'a','b','c'},{'d','e','f'}};
    char b[3][2];
    char *p=*b;
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(p+j*2+i)=a[i][j];
            printf("%c ",a[i][j]);
        }
        
        printf("\n");
        
    }
    
    printf("Transpose of matrix is:\n");
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                printf("%c ",b[i][j]);
            }
            printf("\n");
        }
    
    
    return 0;
}