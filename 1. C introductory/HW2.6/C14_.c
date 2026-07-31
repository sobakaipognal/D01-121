#include<stdio.h>

void chet(void);

int main(){
	chet();
}

void chet(void){
	int x, sum=0;
	scanf("%d", &x);
	while(x){
		sum += x%10;
		x /= 10; 
		}
	if(sum%2) printf("NO");
	else printf("YES");
}
