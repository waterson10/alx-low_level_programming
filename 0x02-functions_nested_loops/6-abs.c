#include "main.h"
/**
 *  _abs - print the value of interger
 *  @c: The number to be checked
 *  Return: The exact value of number or zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val = c * -1;
return (abs_val);
}
return (c);
}
