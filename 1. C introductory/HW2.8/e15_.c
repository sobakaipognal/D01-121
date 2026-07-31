#include<stdio.h>

#define SIZE 10

void fill_arr(int* ar, int len);
int sort_arr_max(int* ar, int* ar2, int len);
int sort_arr_min(int* ar, int* ar3, int len);
void print_arr(int* ar, int len);

int main()
{
	int aArr[SIZE];
	int aArr2[SIZE];
	int aArr3[SIZE];
	fill_arr(aArr, SIZE);
	print_arr(aArr2, sort_arr_max(aArr, aArr2, SIZE));
	print_arr(aArr3, sort_arr_min(aArr, aArr3, SIZE));
}

void fill_arr(int* ar, int len)
{
	for(int i=0; i<len; ++i) scanf("%d", ar+i);
}

int sort_arr_max(int* ar, int* ar2, int len)
{
	int x=0;
	for(int i=0; i<len; ++i)
	{
		if(*(ar+i)>0) 
		{
			*ar2=*(ar+i);
			++ar2;
			++x;
		}
	}
	return x;
}

int sort_arr_min(int* ar, int* ar3, int len)
{
	int x=0;
	for(int i=0; i<len; ++i)
	{
		if(*(ar+i)<0) 
		{
			*ar3=*(ar+i);
			++ar3;
			++x;
		}
	}
	return x;
}

void print_arr(int* ar, int len)
{
	for(int i=0; i<len; ++i) printf("%d ", *(ar+i));
}
