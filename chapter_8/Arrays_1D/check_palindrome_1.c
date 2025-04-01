#include<stdio.h>
int main()
{

    int a[]={1,2,3,4,5,5,4,3,2,1};
    int palindrome=1;
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            palindrome=0;
            break;
        }
        
    }
    if(palindrome==1)
    {
        printf("The array is a palindrome\n");
    }
    else
    {
        printf("The array is not a palindrome\n");
    }
return 0;
}