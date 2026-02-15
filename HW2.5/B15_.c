#include<stdio.h>

int main(void){
	int num, chet=0;
	scanf("%d", &num);
	while(num){
	if(num%2==0) ++chet;
	scanf("%d", &num); 	
	}
	printf("%d", chet);
}
