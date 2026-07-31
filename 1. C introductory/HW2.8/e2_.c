#include <stdio.h>

int main()
{
	int aArr[5]={0};
	int min=0;
	
	for(int i=0; i<5; ++i)
	{
		scanf("%d",aArr+i);
	}
	
	min = *aArr;
	
	for(int i=1; i<5; ++i)
	{
		if(*(aArr+i)<min) min = *(aArr+i);
	}
	
	printf("\n%d", min);
}
