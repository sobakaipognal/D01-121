#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses/ncurses.h>
#include <inttypes.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "snake.h"

#define DELAY 0.1 //для задержке движения змейки
 
int main()
{
    snake_t* snake = (snake_t*)malloc(sizeof(snake_t));
    initSnake(snake,START_TAIL_SIZE,10,10);
    initscr();
    keypad(stdscr, TRUE);   // Включаем F1, F2, стрелки и т.д.
    raw();                  // Откдючаем line buffering
    noecho();               // Отключаем echo() режим при вызове getch
    curs_set(FALSE);        // Отключаем курсор
    mvprintw(1, 0,"Use arrows for control. Press 'F10' for EXIT");
    timeout(0);             //Отключаем таймаут после нажатия клавиши в цикле
    int key_pressed=0;
    while(key_pressed != STOP_GAME)
    {
        clock_t start_time = clock();
        key_pressed = getch(); // Считываем клавишу
        go(snake);
        if(isCrush(snake)) break; // Врезаемся в хвост
        goTail(snake);
        while(((double)clock()-start_time)/CLOCKS_PER_SEC<DELAY);
        changeDirection(snake, key_pressed);
    }
    free(snake->tail);
    free(snake);
    endwin(); // Завершаем режим curses mod
    return 0;
}
