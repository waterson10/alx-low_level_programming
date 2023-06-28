#include "main.h"
/**
 * print_numbers - The program that prints numbers
 * @c: The number must be printed
 * Return: the numbers since 0 up to 9
 */
void print_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
