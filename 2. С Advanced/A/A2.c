#include <stdio.h>

int main()
{
	unsigned int shift, num;
	scanf("%u%u", &num, &shift);
	while(shift)
	{
		num = ((num & 1)==1) ? ((num>>1)|0x80000000) : (num>>1);
		--shift;
	}
	printf("%u", num);
}
