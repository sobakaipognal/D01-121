#include<stdio.h>

int main(){
	int x, y, num;
	scanf("%d", &x);
	for(int i = 0; x; ++i){
		y = x%10;
		num = num +y*10*i;
		x /= 10;
		}
	printf("%d", y);
	return 0;
}
