#include<stdio.h>

static int sum;

int grow_up(int x);

int main(void){
	int n=0;

	scanf("%d", &n);
	grow_up(n);
	printf("%d", sum);
}
int grow_up(int x){
	if(x>0){
		sum += x; 
		grow_up(x-1);
	}
return sum;
}

