#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    char *ret;

    ret = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (ret);
}
int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_strcpy(dest, src);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    return (0);
}