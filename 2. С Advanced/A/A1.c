#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int c;
    while ((c = getchar()) != '.' && c != EOF) {
        if (c == ' ') {
            putchar(' ');
        } else if (c >= 'a' && c <= 'z') {
            putchar((c - 'a' + N) % 26 + 'a');
        } else if (c >= 'A' && c <= 'Z') {
            putchar((c - 'A' + N) % 26 + 'A');
        }
    }
    putchar('.');
    return 0;
}
