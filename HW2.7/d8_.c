#include<stdio.h>

void grow_low(int x, int y);

int main(void){
	int x, y;
	scanf("%d%d", &x, &y);
	grow_low(x, y);
	return 0;
}

void grow_low(int x, int y)
{
	printf("%d ", x);
	
	if(x==y) return; 
	
	if(x<y)
		grow_low(x+1,y);
	else
		grow_low(x-1,y);
}
