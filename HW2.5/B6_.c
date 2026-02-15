#include<stdio.h>

int main(){
	int x, y=0, flag=0;
	scanf("%d", &x);
	while(x){
		if(y==x%10){
			flag=1;
			}
		y = x%10;
		x /= 10; 
		}
	if(flag) printf("YES");
	else printf("NO");
	return 0;
}
