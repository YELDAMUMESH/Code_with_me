
//C program to multiply two matrices

#include <stdio.h>
#include <stdlib.h>


void display(int *p,int r,int c)
{
    int *q;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",*(p+(i*c)+j));
        }
        printf("\n");
    }
}



void matrix_mul(int *a, int r1, int c1, int *b, int r2, int c2, int *res)
{
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            int sum = 0;
            for(int k = 0; k < c1; k++) {
                sum += *(a + i*c1 + k) * *(b + k*c2 + j);
            }
            *(res + i*c2 + j) = sum;
        }
    }
}



void input(int *p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(p+(i*c)+j));
        }
    }
}


int main()

{
    int m,n,p,q;
    printf("Enter the no.of rows and columns of 1st matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the no.of rows and columns of 2nd matrix: ");
    scanf("%d %d",&p,&q);
    
    if(n==p)
    {
        printf("Matrix multiplication is possible!!!\n");
        int *m1,*m2,*m3;
        
        m1= (int*)calloc((m*n),sizeof(int));
        m2= (int*)calloc((p*q),sizeof(int));
        m3= (int*)calloc((m*q),sizeof(int));
        
        printf("Enter elements of matrix1: \n");
        input(m1,m,n);
        printf("Enter elements of matrix2: \n");
        input(m2,p,q);
        matrix_mul(m1,m,n,m2,p,q,m3);
        printf("Matrix multilication:\n");
        display(m3,m,q);

        // Freeing the allocated memory
        free(m1);
        free(m2);
        free(m3);
        
        m1=NULL;
        m2=NULL;
        m3=NULL;
    }
    
    else
    {
        printf("Matrix multiplication is not possible!!\n ");
        return -1;
    }
    
   
    return 0;
}