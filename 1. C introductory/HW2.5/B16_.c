//содрано с лекции
#include<stdio.h>

int main(void){
	int a, b, z;
	scanf("%d%d", &a, &b);
	while(b){
	z = b;
	b = a%b;
	a = z; 	
	}
	printf("%d", z);
}
