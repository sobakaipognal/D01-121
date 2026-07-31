#include<stdio.h>

void max(void);

int main(){
	max();
}

void max(void){
	int num, max=0;
	scanf("%d", &num);
	while(num){
		if((num >= -2)&&(num < 2)){
			num *= num;
		}else if(num>=2){
			num=num*num+4*num+5;
		}else{
			num =4;
		}
		if(num>max) max=num;
		scanf("%d", &num);
	}
		printf("%d",max);
}
