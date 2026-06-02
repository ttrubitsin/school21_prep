#include <stdio.h>

int main(void)
{
    char str[] = "Hello";

    printf("String = %s\n", str);
    printf("First char = %c\n", str[0]);
    printf("Second char = %c\n", str[1]);
    printf("Last char code = %d\n", str[5]);
    return (0);
}