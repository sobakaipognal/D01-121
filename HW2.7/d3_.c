#include<stdio.h>

void prt_num(int x);

int main(void){
	int n=0;

	scanf("%d", &n);
	n==0 ? printf("0") : prt_num(n);
	return 0;
}
void prt_num(int x){
	if(x>0){
		printf("%d ", x%10);
		prt_num(x/10);
	}
}

