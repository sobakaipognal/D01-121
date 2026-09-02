#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_TEXT_SIZE 1000

bool find_number(char *num, int var);

int main()
{
    int count = 0;
    char num[MAX_TEXT_SIZE];
    fgets(num, sizeof(num), stdin);
    for (int i = 100; i <= 999; ++i)
    {
        if (find_number(num, i))
            ++count;
    }
    printf("%d\n", count);
    return 0;
}

bool find_number(char *num, int var)
{
    for (char *j = num; *j != '\0'; ++j)
    {
        if ((var / 100) + '0' == *j)
        {
            for (char *k = j + 1; *k != '\0'; ++k)
            {
                if ((var / 10 % 10) + '0' == *k)
                {
                    for (char *l = k + 1; *l != '\0'; ++l)
                    {
                        if ((var % 10) + '0' == *l)
                        {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}