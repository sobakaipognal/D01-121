#include<stdio.h>

int middle(int a, int b);

int main(){
	int a, b;
	scanf("%d%d", &a ,&b);
	printf("%d", middle(a, b));
}

int middle(int a, int b){
	int mid = (a+b)/2;
	return mid;
}
