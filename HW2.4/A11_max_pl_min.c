#include<stdio.h>

int main(){
	int d1, d2, d3, d4, d5, max, min;
	scanf("%d%d%d%d%d", &d1, &d2, &d3, &d4, &d5);
	max = (d1>d2) ? d1 : d2;
	max = (max > d3) ? max : d3;
	max = (max > d4) ? max : d4;
	max = (max > d5) ? max : d5;
	
	min = (d1<d2) ? d1 : d2;
	min = (min < d3) ? min : d3;
	min = (min < d4) ? min : d4;
	min = (min < d5) ? min : d5;
	
	printf("%d", max+min);
	return 0;
	}
