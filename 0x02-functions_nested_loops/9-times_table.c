#include "main.h"
/**
 * times_table - Print the 9 times table, starting from 0
 * Return: The empty output
 */

void times_table(void)
{
int x, y, z, u, d;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z > 9)
{
u = x % 10;
d = (x - 9) / 10;
_putchar(44);
_putchar(22);
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (y != 0)
{
_putchar(44);
_putchar(22);
}
_putchar(x + '0');
}
}
}
_putchar('\n');
}
