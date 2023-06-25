#include <unistd.h>

/**
 * _putchar.c - Write the character of c to stdout
 * @c: The character to print 
 * Return: success 1.
 * On error, -1 is returned errno is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
