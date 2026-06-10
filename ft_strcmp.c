#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
   

        while (*s1 && *s2 && *s1 == *s2)
        {
            s1++;
            s2++;
        }
        return (*s1 - *s2);
}
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello world";
    char str3[] = "Hello";

    printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2)); // Should return 0
    printf("Comparing 'Hello' and 'Hello': %d\n", ft_strcmp("Hello", "Hello"));
    printf("Comparing 'World' and 'Hello': %d\n", ft_strcmp("World", "Hello"));
    
    return 0;
}