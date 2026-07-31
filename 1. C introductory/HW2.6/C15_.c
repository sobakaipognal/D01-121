#include<stdio.h>

int grow_up(int n);

int main(){
	int a;
	scanf("%d", &a);
	grow_up(a) ? printf("YES") : printf("NO");
}

int grow_up(int n){
	int y, flag=0;
	while(n){
		y = n%10;
		n /= 10;
		if(((n%10) > y)||((n%10) == y)){
			++flag;
			}
		}
	if(flag) return 0;
	return 1;
}
