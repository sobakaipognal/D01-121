#include<stdio.h>

void dec_to_bin(int num);

int main(void){
	int n=0;

	scanf("%d", &n);
	n ? dec_to_bin(n) : printf("0");
	return 0;
}

void dec_to_bin(int num){
	if(num>0){
		dec_to_bin(num/2);
		printf("%d", num%2);
	}
}
