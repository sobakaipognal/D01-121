#include <stdio.h>
#define SIZE 10

void fillArr(int len, int* arr);
void printArr(int len, int* arr);

int main()
{
	int aArr[SIZE]={0};
	
	fillArr(SIZE, aArr);
	
	int fsMaxDigit=*aArr, scMaxDigit=-2147483648, fsI=0;
	
	for(int i=0; i<SIZE; ++i)
	{
		if(fsMaxDigit<*(aArr+i)) 
		{
			fsMaxDigit=*(aArr+i); 
			fsI=i;
		}
	}
	
	for(int i=0; i<SIZE; ++i)
	{
		if((scMaxDigit<*(aArr+i))&&(fsI!=i)) scMaxDigit=*(aArr+i);
		//~ printf("%d %d\n", fsMaxDigit, scMaxDigit);
	}
	
	printf("%d", fsMaxDigit+scMaxDigit);
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
