#include <stdio.h>
#include <string.h>

#define SIZE 1000

void sort_array(int size, int a[]);
void fillArr(int len, int* arr);
void printArr(int len, int* arr);
void count_and_print(int len, int* arr);

int main()
{
	char str[SIZE];
	int arr[SIZE];

	scanf("%s", str);
	int sz = strlen(str);
	
	for(int i = 0; i < sz; ++i)
	{
		arr[i] = str[i] - '0';
	}
	
	if(arr[0] == 0) 
	{
		printf("0 1");
		return 0;
	}
	
	//~ fillArr(SIZE, arr);
	sort_array(sz, arr);
	count_and_print(sz, arr);
	//~ printArr(sz, arr);
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

void count_and_print(int len, int* arr)
{
		int howMuch = 1;
		for(int i = 0; i < len; ++i)
		{
			if(*(arr+i) == *(arr+i+1)) 
			{
				++howMuch;
			}
			else
			{
				printf("%d %d\n", *(arr+i), howMuch);
				howMuch = 1;
			}
		}
}
