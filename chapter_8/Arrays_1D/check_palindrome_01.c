#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,3,2,1};  
    int n = sizeof(a) / sizeof(a[0]);  
    int *left = a, *right = a + n - 1;  
    int palindrome = 1;  
    
    printf("Last address of the array : %p\n",right);
    printf("Starting address of the array : %p\n",(void*)left);
    printf("%p ---a\n",a);
    printf("%p ---a+n-1\n",a+n-1);

    while (left < right)
    {
        if (*left != *right)
        {
            printf("left(%d) != right(%d)\n",*left,*right);
            printf("Since array elements are not eqaul break the loop\n");
            palindrome = 0;
            break;
        }
        printf("%p(left) < %p(right)\n",left,right);
        printf("left(%d) == right(%d)\n",*left,*right);
        left++;
        right--;
    }

    if (left==right){
    printf("%p !< %p\n",left,right);
    printf("Exit while loop since left is not less than right\n");
    }

    if (palindrome)
        printf("Array is a palindrome\n");
    else
        printf("Array is not a palindrome\n");

    return 0;
}
