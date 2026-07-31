#include <stdio.h>

int main(){
	int a, count=0;
	scanf("%d", &a);
	while(a){
		scanf("%d", &a);
		++count;
	}
	printf("%d", count);
	return 0;
	}
