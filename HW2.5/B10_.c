#include<stdio.h>

int main(){
	int x, y, flag=0;
	scanf("%d", &x);
	while(x){
		y = x%10;
		x /= 10;
		if(((x%10) > y)||((x%10) == y)){
			++flag;
			}
		}
	if(flag) printf("NO");
	else printf("YES");
	return 0;
}
