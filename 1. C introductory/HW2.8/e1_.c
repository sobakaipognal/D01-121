#include <stdio.h>

int main()
{
	int aArr[5]={0};
	int sum=0;

	for(int i=0; i<5; ++i)
	{
		scanf("%d",aArr+i);
		sum += *(aArr+i);
	}
	printf("%.3f", (float)sum/5);
}
