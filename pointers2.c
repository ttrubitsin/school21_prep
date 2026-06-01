#include <stdio.h>

void set_to_zero(int *n)
{
    *n = 0;
}

int main(void)
{
    int x = 42;

    printf("Before = %d\n", x);
    set_to_zero(&x);
    printf("After = %d\n", x);
    return (0);
}