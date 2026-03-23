#include <stdio.h>
#define SIZE 12
#define SHIFT_SIZE 4

void fillArr(int len, int* arr);
void printArr(int len, int* arr);
void arrShiftRight(int len, int* arr, int shifts);

int main()
{
	int aArr[SIZE]={0};
	fillArr(SIZE, aArr);
	arrShiftRight(SIZE, aArr, SHIFT_SIZE);
	printArr(SIZE, aArr);
}

void fillArr(int len, int* arr)
{
	for(int i=0; i<len; ++i)
	{
		scanf("%d", arr+i);
	}
}

void arrShiftRight(int len, int* arr, int shifts)
{
	for(int j=0; j<shifts; ++j)
	{
		int save = *(arr+len-1);
		for(int i = len-1; i>0; --i)
		{
			*(arr+i) = *(arr+i-1);
		}
		*arr = save;
	}
}


void printArr(int len, int* arr)
{
	for(int i=0; i<len; ++i)
	{
		printf("%d ", *(arr+i));
	}
}
