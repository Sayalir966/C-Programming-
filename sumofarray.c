
#include<stdio.h>
int fun(int);
int main(){

	int n = 5;
	int result = fun(n);
	printf("Sum of numbers = %d\n",result);
	n=10;
	printf("Sum of n numbers = %d\n",fun(n));
}

int fun(int n){
	int sum = 0;
	for(int i=0; i<=n; i++){
		sum = sum+n;
	}
	return sum;
}


