#include <stdio.h>

int main(void) {
    int a, j, sum, mult;
    scanf("%d", &a);
    
    for (int i = 10; i <= a; ++i) {
        j = i;
        sum = 0;
        mult = 1;
        
        while (j) {
            sum += j % 10;
            mult *= j % 10;
            j /= 10;
        }
        
        if (sum == mult) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
