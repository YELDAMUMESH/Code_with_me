//Sum of multiples

#include<stdio.h>
int main()
{
int i=0,n,sum=0;
printf("Enter the value of n: ");
scanf("%d",&n);

/*do{
    sum=sum+i;
    i=i+n;
    }while(i<=n*10);
*/


/*while(i<=n*10)
{
    sum=sum+i;
    i=i+n;
}*/

for(i=0;i<=n*10;i+=n)
{
    sum=sum+i;
}
printf("Sum of multiples of %d is %d\n",n,sum);
return 0;
}


