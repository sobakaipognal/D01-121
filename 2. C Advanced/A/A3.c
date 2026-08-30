#include <stdio.h>

int main()
{
	unsigned int shift, num, mask=0;
	scanf("%u%u", &num, &shift);
	while(shift)
	{
		mask = mask<<1;
		mask = mask | 1;
		--shift;
	}
	printf("%d\n", num & mask);
}
