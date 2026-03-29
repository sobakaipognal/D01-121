#include<stdio.h>

#define SIZE 1000

void sort_array(int size, int a[]);
void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{

	fillArr(SIZE, arr);
	sort_array(sz, arr);
	printArr(sz, arr);
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

void sort_array(int size, int a[])
{
	for(int i = 0; i < size-1; ++i)
	{
		for(int j = 0; j < size-1; ++j)
		{
			if(*(a+j)>*(a+(j+1)))
			{
				int temp = *(a+j);
				*(a+j) = *(a+(j+1));
				*(a+(j+1)) = temp;
			}
		}
	}
}
