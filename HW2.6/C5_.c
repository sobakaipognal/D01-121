#include<stdio.h>

void max(void);

int main(){
	max();
}

void max(void){
	int num, sum=0;
	scanf("%d", &num);
	for(int i = num; i; --i){
		sum += i;
	}
		printf("%d",sum);
}
