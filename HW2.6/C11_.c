#include<stdio.h>

int nod(int a, int b);

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", nod(a, b));
}

int nod(int a, int b){
	int z;
	while(b){
	z = b;
	b = a%b;
	a = z; 	
	}
	return (z);
}
