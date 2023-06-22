#include <stdio.h>
/**
 * main - Prints alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char low, q, e;
q = 'q';
e  = 'e';

for (low = 'a'; low <= 'z'; low++)
{
if (low != q && low != e)
putchar(low);
}
putchar('\n');
return (0);
}

