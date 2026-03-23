#include <stdio.h>
#define SIZE 10

void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{
	int aArr[SIZE]={0};
	int sum=0;
	fillArr(SIZE, aArr);
	
	for(int i=0; i<SIZE; ++i)
	{
		if(*(aArr+i)>0) sum += *(aArr+i);
	}
	
	printf("%d", sum);
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
