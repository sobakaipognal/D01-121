#include <stdio.h>
#define SIZE 10

void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{
	int aArr[SIZE]={0};
	fillArr(SIZE, aArr);
	printArr(SIZE/2, aArr);
	printArr(SIZE/2, aArr+SIZE/2);
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
