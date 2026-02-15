#include<stdio.h>

int main(void){
	char ch;
	while((ch=getchar()) != '.'){
		if((ch >= 0x41) && (ch <= 0x5A)) printf("%c", ch+32);
		else printf("%c", ch);
	}
	return 0;
}
