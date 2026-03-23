#include<stdio.h>

#define SIZE 10

void fill_arr(int* ar, int len);
int sort_arr(int* ar1, int* ar2, int len);
void print_arr(int* ar, int len);

int main()
{
	int aArr[SIZE];
	int aArr2[SIZE] = {0};
	int y;
	fill_arr(aArr, SIZE);
	y = sort_arr(aArr, aArr2, SIZE);
	print_arr(aArr2, y);
}

void fill_arr(int* ar, int len)
{
	for(int i=0; i<len; ++i) scanf("%d", ar+i);
}

int sort_arr(int* ar1, int* ar2, int len)
{
	int x=0;
	for(int i=0; i<len; ++i)
	{
		if(!((*(ar1+i)/10)%10))
		{
			*(ar2+x) = *(ar1+i);
			++x;
		} 
	}
	return x;
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
