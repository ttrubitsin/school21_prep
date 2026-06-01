#include <stdio.h>

int main(void)
{
    int x = 42;
    int *p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("p stores address = %p\n", p);
    printf("Value at address = %d\n", *p);
    *p = 100;
    printf("x after change = %d\n", x);
    return (0);
}