#include <stdio.h>
#include <string.h>

#define SIZE 1000

void sort_array(int size, int a[]);
void fillArr(int len, int* arr);
void printArr(int len, int* arr);
void count_and_print(int len, int* arr);
int find_max_array(int size, int a[]);

int main()
{
	char str[SIZE];
	char ch;
	int i = 0;
	
	while ((ch = getchar()) != '\n')
	{
		*(str+i) = ch;
		++i;
	}
	
	find_max_array(strlen(str), str);
}
//----------------------------------------------------------------------
int find_max_array(int size, int a[])
{
	int max = a[0];
	for(int i = 0; i < size; ++i)
	{
		if(a[i] > max) max = a[i];
	}
	return max;
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
