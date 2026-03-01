#include<stdio.h>

void reverse_string(void);

int main(void){
	reverse_string();
	return 0;
}

void reverse_string(void){
	char ch=0;
	if((ch=getchar())!='.')
	{
		reverse_string();
		printf("%c", ch);
	}
}
