#include <stdio.h>

int main()
{
	unsigned int num, count = 0;
	scanf("%u", &num);
	for(int i = 32; i > 0; --i)
	{
		if((num & 1) == 1) ++count;
		num = (num >> 1);
	}
	printf("%d\n", count);
}
