#include <stdio.h>

int main(){
	int d1, d2, d3;
	scanf("%d%d%d", &d1, &d2, &d3);
	if((d1>d2)&&(d1>d3)){
		printf("%d", d1);
		} else if((d2>d3) && (d2>d1)){
			printf("%d", d2);
			} else {
			printf("%d", d3);
			}
	return 0;
	}
