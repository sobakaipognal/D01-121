#include <stdio.h>
#include <stdint.h> //for int8_t etc
#include <string.h>
#include <stdlib.h>
#include "temp_functions.h"

int main(int argc, char *argv[])
{

    int correct_flag = 0;
    Stat month_stat[12] = {0};

    for (int i = 0; i < 12; i++)
    {
        month_stat[i].max = -128;
        month_stat[i].min = 127;
    }
    
    Stat year_stat = {0};
    For_count accum[12] = {0};
    FILE *file;

    if (argc <= 1)
    {
        printf("Please enter name of statisics file using -f\n");
        printf("for examle: t_sens.exe -f <filename.csv>\n");
        printf("for more information enter -h\n");
        printf("for example: t_sens.exe -h\n");
        return 1;
    }

for (int i = 1; i < argc; ++i)
{
    if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
    {
        help_menu();
        return 0;
    }
}

    for (int i = 1; i < argc; ++i)
    {
        if (strcmp(argv[i], "-f") == 0)
        {
            if ((i + 1) < argc)
            {
                file = fopen(argv[i+1], "r");
                if(file == NULL)
                {
                    printf("ERROR: Cannot open file %s\n", argv[i+1]);
                    return 1;
                }
                correct_flag = 1;
                break;
            }
            else
            {
                printf("Please enter name of statisics file using -f\n");
                printf("for example: t_sens.exe -f <filename.csv>\n");
                return 1;
            }
        }
    }
    
    if(!correct_flag)
    {
            printf("Please enter name of statisics file using -f\n");
            printf("for example: t_sens.exe -f <filename.csv>\n");
            return 1;
    }
    else
    {
        parse_data(file, month_stat, accum);
        if(argc == 3) year_statistic(month_stat, accum);
    }
    
    for (int i = 1; i < argc; ++i)
    {
        if (strcmp(argv[i], "-m") == 0)
        {
            if (i + 1 < argc)
            {
                if ((atoi(argv[i + 1]) <= 12 && atoi(argv[i + 1]) >= 1))
                {
                    month_statistic(month_stat, atoi(argv[i + 1]), accum);
                    ++i;
                }
                else
                {
                    printf("After -m enter month number (1-12)\n");
                }
            }
            else
            {
                printf("After -m enter month number (1-12)\n");
            }
        }
    }
    
    fclose(file);
    return 0;
}