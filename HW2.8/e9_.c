#include <stdio.h>
#define SIZE 10

void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{
	int aArr[SIZE]={0};
	fillArr(SIZE, aArr);
	printf("%d ", *(aArr+SIZE-1));
	printArr(SIZE, aArr);
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
	for(int i=0; i<len-1; ++i)
	{
		printf("%d ", *(arr+i));
	}
}
