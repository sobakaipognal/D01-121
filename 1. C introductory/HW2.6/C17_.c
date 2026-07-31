#include<stdio.h>

int is_happy_number(int n);

int main(){
	int a;
	scanf("%d", &a);
	is_happy_number(a) ? printf("YES") : printf("NO");
}

int is_happy_number(int n) {
    int sum=0, mult=1;
        
        while(n) {
            sum += n % 10;
            mult *= n % 10;
            n /= 10;
        }
        
        if (sum == mult) {
            return 1;
        }
        return 0;
}

