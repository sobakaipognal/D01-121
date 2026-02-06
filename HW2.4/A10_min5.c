#include <stdio.h>

int main(){
	int d1, d2, d3, d4, d5, min;
	scanf("%d%d%d%d%d", &d1, &d2, &d3, &d4, &d5);
	min = (d1<d2) ? d1 : d2;
	min = (min < d3) ? min : d3;
	min = (min < d4) ? min : d4;
	min = (min < d5) ? min : d5;
	printf("%d", min);
	return 0;
	}
