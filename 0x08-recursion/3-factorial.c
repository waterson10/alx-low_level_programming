#include "main.h"

/**
 * factorial - returns the factorial of the given value
 * @n: the number to calculate the factorial value
 * Return: the interger value
 */

int factorial(int n)
{
if (n < 0)

return (-1);

if (n <= 1)
return (1);

return (n * factorial(n - 1));
}
