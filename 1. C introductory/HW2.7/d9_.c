#include<stdio.h>

int sum_digit(int n);

int main(void){
	int x;
	scanf("%d", &x);
	printf("%d", sum_digit(x));
	return 0;
}

int sum_digit(int n)
{
	printf("get_sum(%d)\n", n);

    int res = n % 10;
    if (n >= 10)
        res += sum_digit(n / 10);
    return res;
}
