#include "main.h"
/**
 * swap_int - swap the values of two inntergers
 * @a: The first interger to be swaped
 * @b: The second interger to be swaped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
