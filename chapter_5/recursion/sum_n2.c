#include <stdio.h>

int  sum_of_n_digits(int n){
	int remainder,sum;
	if (n!=0){
		remainder=n%10;
		sum=remainder+sum_of_n_digits(n/10);
	}
	else	
		return 0 ;
	return sum;
}




int main(){
	int n,ans;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	ans=sum_of_n_digits(n);
	printf("sum of %d digits are %d\n",n,ans);
	return 0;
}
