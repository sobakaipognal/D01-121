#include<stdio.h>

int is_digit(char c);

int main(){
	char ch, count=0;
	while((ch=getchar())!='.'){
		count += (is_digit(ch));
		}
	printf("%d", count);
}

int is_digit(char c) {
    if(c>='0' && c <='9') return (c-48);
	return 0;
}

