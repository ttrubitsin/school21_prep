#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int subtract (int a, int b)
{
    return (a - b);
}

int multiply (int a, int b)
{
    return (a * b);
}
void print_hello(void)
{
    printf("Hello, School 21!\n");
}

int main(void)
{
    int result_1;
    int result_2;
    int result_3;

    result_1 = add(6, 2);
    result_2 = subtract (6, 2);
    result_3 = multiply (6,2);
    print_hello();	
    printf("6 + 2 = %d\n", result_1);
    printf("6 - 2 = %d\n", result_2);
    printf("6 * 2 = %d\n", result_3); 
    return (0);
}