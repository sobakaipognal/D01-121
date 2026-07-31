#include<stdio.h>

void myabs(int x);

int main(){
	int a;
	scanf("%d", &a);
	myabs(a);
}

void myabs(int x){
	if(x<0) printf("%d", x*-1);
	else printf("%d", x);
	}
