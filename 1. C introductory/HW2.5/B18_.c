#include <stdio.h>

int main(void) {
    int n, s1=0, s2=1, mid=0;
    scanf("%d", &n);
    
    if(n==1) printf("%d", n);
	else {
			printf("%d ", s2);
			for(int i = 1; i < n; ++i){
				mid = s1 + s2;
				s1 = s2;
				s2 = mid;
				printf("%d ", s2);
				}
		 }
    return 0;
}
