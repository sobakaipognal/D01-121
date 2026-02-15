#include<stdio.h>

int power(int n, int p);

int main(){
	int a, b;
	scanf("%d%d", &a ,&b);
	printf("%d", power(a, b));
}

int power(int n, int p){
	int sq=1;
	for(; p; --p){
			sq *= n;
	}
	return sq;
}
