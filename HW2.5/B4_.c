#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if((a/100) > 0 && (a/100) <10){
		printf("YES");
		} else {
			printf("NO");
			}
	//printf("\n%d",a/100);
	return 0;
	}
