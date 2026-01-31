#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	printf("%d\n", (x/100) * (x%100/10) * (x%10));
	}
