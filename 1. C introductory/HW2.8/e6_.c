#include <stdio.h>
#define SIZE 12

void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{
	int aArr[SIZE]={0};
	int sum=0;
	fillArr(SIZE, aArr);
	
	for(int i=0; i<SIZE; ++i) sum += *(aArr+i);
	
	printf("%.2f", (float)sum/SIZE);
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
