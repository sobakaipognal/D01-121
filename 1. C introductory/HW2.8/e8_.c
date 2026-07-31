#include <stdio.h>
#define SIZE 12

void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{
	int aArr[SIZE]={0};
	fillArr(SIZE, aArr);
	for(int i=0; i<SIZE/4; ++i)
	{
		printArr(SIZE/3, aArr+i*4);
	}
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
	for(int i=len-1; i>=0; --i)
	{
		printf("%d ", *(arr+i));
	}
}
