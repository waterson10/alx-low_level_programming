#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of string
 * @str: The string to get the length of
 * Return: The length of @str
 */

int _strlen(char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}
