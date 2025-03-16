#include<stdio.h>

void primefact(int n,int i)
{

	if(i<=n)
	{
	if (n%i==0)
	{
		printf(" %d",i);
		n=n/i;
		}
	else 
		i++;
		primefact(n,i);
	
}
}



int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Prime factors are: ");
	primefact(n,2);
	printf("\n");
	return 0;
	}
