#ifndef SNAKE_H
#define SNAKE_H

#include <stddef.h>
#include <stdint.h>
#include <ncurses/ncurses.h>

#define MIN_Y 2

enum {LEFT, UP, RIGHT, DOWN, STOP_GAME=KEY_F(10)};
enum {MAX_TAIL_SIZE=100, START_TAIL_SIZE=3, MAX_FOOD_SIZE=20, FOOD_EXPIRE_SECONDS=10};

// Здесь храним коды управления змейкой
struct control_buttons
{
    int down;
    int up;
    int left;
    int right;
};

extern struct control_buttons default_controls[];

//Хвост это массив состоящий из координат x,y
typedef struct tail_t
{
    int x;
    int y;
} tail_t;

/*
 Голова змейки содержит в себе
 x,y - координаты текущей позиции
 direction - направление движения
 tsize - размер хвоста
 *tail -  ссылка на хвост
 */
typedef struct snake_t
{
    int x;
    int y;
    int direction;
    size_t tsize;
    struct tail_t *tail;
    struct control_buttons controls;
} snake_t;

typefef struct food
{
    int x;
    int y;
    time_t put_time;
    char point;
    uint8_t enable;
} food_t;

void initTail(struct tail_t t[], size_t size);
void initHead(struct snake_t *head, int x, int y);
void initSnake(snake_t *head, size_t size, int x, int y);
void initFood(food_t f[], size_t size); 
void go(struct snake_t *head); //Движение головы с учетом текущего направления движения
int checkDirection(snake_t* snake, int32_t key); //запрет движение в противоположную сторону по кнопке
void changeDirection(struct snake_t* snake, const int32_t key);
void goTail(struct snake_t *head); //Движение хвоста с учетом движения головы
int isCrush(snake_t * snake); //Стокновение головы с хвостом

#endif