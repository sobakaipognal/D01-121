#include <stdio.h>

int main()
{
	int sum = 0;
	int i = 0;
	char c;
	char text[100] = {0};
	FILE* in = fopen("input.txt", "r");
	FILE* out = fopen("output.txt", "w");
	
	while ((c = getc(in)) != EOF)
	{
		if(c =='\n') continue;
		++sum;
		text[i] = c;
		++i;
	}
	text[i] = '\0';
	for(int j = 0; j < 3; ++j)
	{
		j<2 ? fprintf(out, "%s, ", text) : fprintf(out, "%s ", text); 
	}
	fprintf(out, "%d ", sum);
	fclose(in);
	fclose(out);
	//~ printf("%d", sum);
}
