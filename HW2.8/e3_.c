#include <stdio.h>
#define SIZE 10

void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{
	int aArr[SIZE]={0};
	int minI, maxI, minDigit, maxDigit;
	minI = minDigit = 0xFFFF;
	maxI = maxDigit = 0;
	
	fillArr(SIZE, aArr);
	//~ printArr(SIZE, aArr);
	
	for(int i=0; i<SIZE; ++i)
	{
		if(minDigit > *(aArr+i))
		{
			minDigit = *(aArr+i);
			minI = i+1;
		}
		if(maxDigit < *(aArr+i))
		{
			maxDigit = *(aArr+i);
			maxI = i+1;
		}
	}
	printf("%d %d %d %d", maxI, maxDigit, minI, minDigit);
}

void fillArr(int len, int* arr)
{
	for(int i=0; i<len; ++i)
	{
		scanf("%d", arr+i);
	}
}

void printArr(int len, int* arr)
{
	for(int i=0; i<len; ++i)
	{
		printf("%d ", *(arr+i));
	}
}
