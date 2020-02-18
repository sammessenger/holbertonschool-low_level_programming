/**
 * puts_half - should print second half of string
 * @str: string to be printed
 * Return: void
*/
#include "holberton.h"
void puts_half(char *str)
{
	int i, a;

	i = 0;
	a = 0;

	while (str[i])
	i++;

	if (a % 2 == 0)
	a = i / 2;
	else
	a = (i / 2) - 1;

	for (; a < i; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
