#include<stdio.h>

#define SIZE 10

void fill_arr(int* ar, int len);
int sort_arr(int* ar, int* ar2, int len);
void print_arr(int* ar, int len);

int main()
{
	int aArr[SIZE];
	int aArr2[SIZE];
	int x;
	fill_arr(aArr, SIZE);
	x=sort_arr(aArr, aArr2, SIZE);
	print_arr(aArr2, x);
}

void fill_arr(int* ar, int len)
{
	for(int i=0; i<len; ++i) scanf("%d", ar+i);
}

int sort_arr(int* ar, int* ar2, int len)
{
	int x=0;
	for(int i=0; i<len-1; ++i)
	{
		int flag=0;
		for(int j=i+1; j<len; ++j)
		{
			if(*(ar+i)==*(ar+j))
			{
				*(ar2+x)=*(ar+j);
				++x;
				flag=1;
			}
		}
	}
	return x;
}

void print_arr(int* ar, int len)
{
	for(int i=0; i<len; ++i) printf("%d ", *(ar+i));
}
