#include "snake.h"
#include <ncurses/ncurses.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#define CONTROLS_ARR_SIZE \
    (sizeof(default_controls)/ sizeof(default_controls[0]))

struct control_buttons default_controls[] =
    {
        {KEY_DOWN, KEY_UP, KEY_LEFT, KEY_RIGHT},
        {'S', 'W', 'A', 'D'},
        {'s', 'w', 'a', 'd'}};

void initTail(struct tail_t t[], size_t size)
{
    struct tail_t init_t = {0, 0};
    for (size_t i = 0; i < size; i++)
    {
        t[i] = init_t;
    }
}

void initHead(struct snake_t *head, int x, int y)
{
    head->x = x;
    head->y = y;
    head->direction = RIGHT;
}

void initSnake(snake_t *head, size_t size, int x, int y)
{
    tail_t *tail = (tail_t *)malloc(MAX_TAIL_SIZE * sizeof(tail_t));
    initTail(tail, MAX_TAIL_SIZE);
    initHead(head, x, y);
    head->tail = tail; // прикрепляем к голове хвост
    head->tsize = size + 1;
    // head->controls = default_controls[0]; //не использую пока
}

// Движение головы с учетом текущего направления движения
void go(struct snake_t *head)
{
    char ch = '@';
    int max_x = 0, max_y = 0;
    getmaxyx(stdscr, max_y, max_x);  // macro - размер терминала
    mvprintw(head->y, head->x, " "); // очищаем один символ
    switch (head->direction)
    {
    case LEFT:
        if (head->x <= 0)
            head->x = max_x; // уход за границы экрана, цикличный переход на противоположную сторону
        mvprintw(head->y, --(head->x), "%c", ch);
        break;
    case RIGHT:
        if (head->x >= max_x)
            head->x = 0;
        mvprintw(head->y, ++(head->x), "%c", ch);
        break;
    case UP:
        if (head->y >= max_y)
            head->y = 0;
        mvprintw(--(head->y), head->x, "%c", ch);
        break;
    case DOWN:
        if (head->y <= 0)
            head->y = max_y;
        mvprintw(++(head->y), head->x, "%c", ch);
        break;
    default:
        break;
    }
    refresh();
}

int checkDirection(snake_t* snake, int32_t key)
{
    
}

void changeDirection(struct snake_t *snake, const int32_t key)
{
    for (int i = 0; i < CONTROLS_ARR_SIZE; ++i)
    {
        if (key == default_controls[i].down)
            snake->direction = DOWN;
        else if (key == default_controls[i].up)
            snake->direction = UP;
        else if (key == default_controls[i].right)
            snake->direction = RIGHT;
        else if (key == default_controls[i].left)
            snake->direction = LEFT;
    }
}

// Движение хвоста с учетом движения головы
void goTail(struct snake_t *head)
{
    char ch = '*';
    mvprintw(head->tail[head->tsize - 1].y, head->tail[head->tsize - 1].x, " ");
    for (size_t i = head->tsize - 1; i > 0; i--)
    {
        head->tail[i] = head->tail[i - 1];
        if (head->tail[i].y || head->tail[i].x)
            mvprintw(head->tail[i].y, head->tail[i].x, "%c", ch);
    }
    head->tail[0].x = head->x;
    head->tail[0].y = head->y;
}

int isCrush(snake_t *snake)
{
    for (size_t i = 0; i < snake->tsize; ++i)
    {
        if (snake->x == snake->tail[i].x && snake->y == snake->tail[i].y)
        {
            return 1;
        }
    }
    return 0;
}