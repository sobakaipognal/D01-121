#include<stdio.h>

void reverse_num(int y);

int main(void){
	int x=0;
	scanf("%d", &x);
	reverse_num(x);
	return 0;
}

void reverse_num(int y){
	if(y)
	{
		printf("%d ", y--);
		reverse_num(y);
	}
}
