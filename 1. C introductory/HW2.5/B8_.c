#include<stdio.h>

int main(){
	int x, count=0;
	scanf("%d", &x);
	while(x){
		if(x%10 == 9){
			++count;
			}
		x /= 10; 
		}
	if(count == 1) printf("YES");
	else printf("NO");
	return 0;
}
