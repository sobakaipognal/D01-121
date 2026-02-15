#include<stdio.h>

int main(){
	int x, y, flag=0;
	scanf("%d", &x);
	
	for(int i = x; i; i /= 10){
		y = i%10;
		//printf("%d %d\n", i, y);
		for(int j = i/10; j; j /= 10){
			//printf("%d\n", j);
			if(y == (j%10)) flag = 1;
		}
	}
		if(flag) printf("YES");
		else printf("NO");
	return 0;
}
