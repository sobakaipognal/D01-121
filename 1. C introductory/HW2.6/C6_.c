#include<stdio.h>

void max(void);

int main(){
	max();
}

void max(void){
	int num;
	unsigned long long int sum=1;
	scanf("%d", &num);
	for(int i = 1; i < num; ++i){
		sum = sum*2;
	}
		printf("%llu",sum);
}
