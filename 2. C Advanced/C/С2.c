#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10001];
    char str2[10001];

    scanf("%10000s", str1);
    scanf("%10000s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int max_len = len1 < len2 ? len1 : len2;

    int first = 0;
    int second = 0;

    //ищем префикс первой строки в суфиксе второй
    for (int k = max_len; k > 0; k--)
    {
        if (strncmp(str1, str2 + len2 - k, k) == 0)
        {
            first = k;
            break;
        }
    }

    //ищем перфикс второй строки в суфиксе первой
    for (int k = max_len; k > 0; k--)
    {
        if (strncmp(str1 + len1 - k, str2, k) == 0)
        {
            second = k;
            break;
        }
    }

    printf("%d %d\n", first, second);

    return 0;
}