#include<stdio.h>

#define SIZE 10

void fill_arr(int* ar, int len);
void sort_arr_up(int* ar, int len);
void sort_arr_down(int* ar, int len);
void print_arr(int* ar, int len);

int main()
{
	int aArr[SIZE];
	fill_arr(aArr, SIZE);
	sort_arr_up(aArr, SIZE);
	sort_arr_down(aArr, SIZE);
	print_arr(aArr, SIZE);
}

void fill_arr(int* ar, int len)
{
	for(int i=0; i<len; ++i) scanf("%d", ar+i);
}

void sort_arr_up(int* ar, int len)
{
	for(int i=0; i<len/2-1; ++i)
	{
		for(int j=i+1; j<len/2; ++j)
		{
			if(*(ar+i)>*(ar+j))
			{
				int temp = *(ar+i);
				*(ar+i) = *(ar+j);
				*(ar+j) = temp;
			}
		}
	}
}

void sort_arr_down(int* ar, int len)
{
	for(int i=len/2; i<len-1; ++i)
	{
		for(int j=i+1; j<len; ++j)
		{
			if(*(ar+i)<*(ar+j))
			{
				int temp = *(ar+j);
				*(ar+j) = *(ar+i);
				*(ar+i) = temp;
			}
		}
	}
}

void print_arr(int* ar, int len)
{
	for(int i=0; i<len; ++i) printf("%d ", *(ar+i));
}
