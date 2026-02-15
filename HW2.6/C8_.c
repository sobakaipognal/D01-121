#include<stdio.h>

void converter(void);

int main(){
	converter();
}

void converter(void){
	char ch;
	while((ch=getchar()) != '.'){
		if((ch >='a')&&(ch<='z')) printf("%c", ch-32);
		else printf("%c", ch);
	}
}
