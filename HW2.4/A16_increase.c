#include<stdio.h>

int main(){
	int x,y,z;
	scanf("%d%d%d", &x, &y, &z);
	((x < y) && (y < z)) ? printf("YES") : printf("NO");
	return 0;
	}
