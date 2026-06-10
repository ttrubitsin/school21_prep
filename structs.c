#include <stdio.h>

struct Ball
{
    int x;
    int y;
};

struct Paddle
{
    int x;
    int y;
    int size;
};

int main(void)
{
    struct Ball ball;
    struct Paddle paddle;

    ball.x = 5;
    ball.y = 3;
    paddle.x = 20;
    paddle.y = 2;
    paddle.size = 3;
    printf("Ball: x=%d, y=%d\n", ball.x, ball.y);
    printf("Paddle: x=%d, y=%d, size=%d\n", paddle.x, paddle.y, paddle.size);
    return (0);
}