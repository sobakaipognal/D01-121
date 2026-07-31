#include <stdio.h>

#define SIZE 10

void print_arr(char* a, int l);
int readFromFile(FILE* f, char a[]);


int main()
{
	FILE* in = fopen("input.txt", "r");
	FILE* out = fopen("output.txt", "w");
	
	//~ int len1;
	char arr1[1000];
	//~ char arr2[1000];

	//~ len1 = readFromFile(in, arr1);
	readFromFile(in, arr1);
	fprintf(out, "%s", arr1);
}

void print_arr(char* a, int l)
{
	for(int i = 0; i < l; ++i)
	{
		printf("%c", *(a+i));
	}
	printf("\n");
}

int readFromFile(FILE* f, char* a)
{
	int i = 0;
	char c = '0';
	
	while((c=getc(f)) != EOF)
	{
		if(c == '\n') break;
		
		if((c == 'a') || (c == 'A')){
			*(a+i) = (c+1);
		} else if((c == 'b') || (c == 'B')){
			*(a+i) = (c - 1);
		} else {
			*(a+i) = c;
		}
		++i;
	}
	*(a+i) = '\0';
return i;
}
