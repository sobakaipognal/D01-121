#include <stdio.h>
#include <stdint.h>
#include "temp_api.h"

struct sensor
{
    uint8_t day;
    uint8_t  month;
    uint16_t year;
    int8_t T;
};

int main(void)
{
    printf("Hello \n World!");
    return 0;
}