/**
 * puts2 - should print every other chracter of @str
 * @str: string to be printed
 * Return: should be null
*/
#include "holberton.h"
void puts2(char *str)
{
	int i, a;

	i = 0;

	while (str[i])
	i++;

	for (a = 0; a < i; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
