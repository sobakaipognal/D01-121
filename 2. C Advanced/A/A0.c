#include <stdio.h>

int main()
{
	int max, length, num;
	int repet = 1;
	
	scanf("%d", &length);
	
	scanf("%d", &max);

	for(int i = 0; i < length-1; ++i)
	{
		scanf("%d", &num);
		if(num > max) 
		{
			max = num;
			repet = 1;
		} 
		else if(max == num)
		{
			++repet;
		}
	} 
	printf("%d\n", repet);
}
