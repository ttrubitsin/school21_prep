#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    int i;

    
    for (i = 0; i < 26; i++)
    {
        ft_putchar('z'-i);
    }
    
}
int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}