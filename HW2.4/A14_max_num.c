#include<stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	if(((num/100) > ((num%100)/10)) && ((num/100) > (num%10))){
		printf("%d", num/100);
		} else if ((num%100)/10 > (num%10)){
			printf("%d", (num%100)/10);
			} else {
				printf("%d", num%10);
				}
	return 0;
	}
