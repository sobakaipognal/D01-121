#include<stdio.h>

int factorial(int n);

int main(){
	int x;
	scanf("%d", &x);
	printf("%d", factorial(x));
}

int factorial(int n){
	int fact=1;
	for(int i =1; i <= n; ++i){
		fact *= i;
	}
	return (fact);
}
