#include<stdio.h>

#define SIZE 10

void sort_even_odd(int n, int a[]);
void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{
	int arr[SIZE];
	fillArr(SIZE, arr);
	sort_even_odd(SIZE, arr);
	printArr(SIZE, arr);
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

void sort_even_odd(int n, int a[])
{
	int a2[n];
	int j = 0;
	for(int i = 0; i < n; ++i)
	{
		if(!(*(a+i)%2))
		{
			*(a2+j) = *(a+i);
			++j;
		}
	}
	
	for(int i = 0; i < n; ++i)
	{
		if(*(a+i)%2)
		{
			*(a2+j) = *(a+i);
			++j;
		}
	}
	for(int i = 0; i < n; ++i)
	{
		*(a+i) = *(a2+i);
	}
}
