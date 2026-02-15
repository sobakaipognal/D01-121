#include<stdio.h>

int main(){
	int x, flag=0;
	scanf("%d", &x);
	while(x){
		if((x%10)%2 != 0){
			++flag;
			}
		x /= 10; 
		}
	if(flag == 0) printf("YES");
	else printf("NO");
	return 0;
}
