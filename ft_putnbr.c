#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar('0' + n % 10);
}

int main(void)
{
    ft_putnbr(123);
    ft_putchar('\n');
    ft_putnbr(-456);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    return (0);
}