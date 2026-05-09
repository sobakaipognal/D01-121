#include "temp_api.h"
#include <stdio.h>

#define YEAR 2021
#define MONTHS 12

void parse_data(FILE *filename, Stat *month_stat, For_count *accum)
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int T;
    int ok;
    int line = 0;

    while (1)
    {
        ok = fscanf(filename, "%i;%i;%i;%i;%i;%i",  &year, &month, &day, &hour, &minute, &T);
        if(ok == EOF) return;
        ++line;

        if(ok!=6)
        {
            printf("Error in line: %d\n", line);
            int a;
            while((a = fgetc(filename)) != '\n' && a != EOF);
            continue;
        }

        if ((year >= 1900 && year <= 2200) && (month >= 1 && month <= 12) && (day >= 1 && day <= 31) 
            && ((hour >= 0 && hour <= 23) && (minute >= 0 && minute <= 59) && (T >= -100 && T <= 100)))
        {
            if ((month_stat + month - 1)->max < T) (month_stat + month - 1)->max = T;
            if ((month_stat + month - 1)->min > T) (month_stat + month - 1)->min = T;
            (accum + month - 1)->count++;
            (accum + month - 1)->sum += T;
        }     
    }
}

void month_statistic(Stat *month_stat, int num, For_count *accum)
{
    printf("## Year Month MonthAver MonthMax MonthMin\n");
    printf("%02d %4d %5d %9d %8d %8d", 1, YEAR, num, ((accum+num-1)->sum)/((accum+num-1)->count),
    (month_stat+num-1)->max, (month_stat+num-1)->min);
}

void year_statistic(Stat *month_stat, For_count *accum)
{
    int max = 0, min = 0, aver = 0;
    int tot_sum = 0, tot_count = 0;
    
    for (int i = 0; i < MONTHS; i++)
    {
        max += (month_stat+i)->max;
        min += (month_stat+i)->min;
        if((accum+i)->count == 0) continue;
        tot_sum = (accum+i)->sum;
        tot_count = (accum+i)->count;
    }
    
    aver = tot_sum / tot_count;

    printf("Year YearhAver YearMax YearMin\n");
    printf("%4d %9d %7d %7d\n", YEAR, aver, max/MONTHS, min/MONTHS);
    
    printf("## Year Month MonthAver MonthMax MonthMin\n");
    
    for (int i = 0; i < MONTHS; i++)
    {
        printf("%02d %4d %5d %9d %8d %8d\n", i+1, YEAR, i+1, ((accum+i)->sum)/((accum+i)->count),
        (month_stat+i)->max, (month_stat+i)->min);
    }
}

void help_menu()
{
    printf("\nProgram t_sens works with a statistics file from a temperature sensor.\n");
    printf("Statistics include: maximum temperature, minimum temperature and average temperature.\n\n");
    printf("Arguments to work with:\n");
    printf("    -h                                  Show this help.\n");
    printf("    -f <filename>                       Name of the statistics file.\n");
    printf("    -m [month number] [year]            Number or name of month to view statistic.\n");
    printf("\nExamples:\n");
    printf("    t_sens.exe -f <filename>.csv -m 10\n    shows statistics for October 2021 using file temp_stat.csv.\n\n");
}

