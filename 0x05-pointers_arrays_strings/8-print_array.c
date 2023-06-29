#include "main.h"
#include <stdio.h>
/**
 * print_array - Print an element of array of an interger 
 * @a: Array of an interger
 * @n: number of elements of an array of an interger
 * Return: void
 */

void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
