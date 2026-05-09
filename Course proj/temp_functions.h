#include <stdio.h>
#include <stdint.h>

typedef struct 
{
    int16_t max;
    int16_t min;
} Stat;

typedef struct 
{
    int32_t sum;
    int32_t count;
} For_count;

void parse_data(FILE* filemane, Stat *month_stat, For_count *);
void help_menu();
void month_statistic(Stat *month_stat, int num, For_count *accum);
void year_statistic(Stat *month_stat, For_count *accum);