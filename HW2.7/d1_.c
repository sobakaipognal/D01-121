#include<stdio.h>

void grow_up(int x);

int main(void){
	int n=0;
	scanf("%d", &n);
	grow_up(n);
}
void grow_up(int x){
	if(x>0){ 
		grow_up(x-1);
		printf("%d ",x);
	}
}
