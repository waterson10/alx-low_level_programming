#include <stdio.h>

/**
 * main - Print the name of the file of tje program
 *        was compiled from, followed by new line.
 * Return: always 0
 */

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
