/**
 * print_rev - should print a string in reverse
 * @s: string to be printed
 * Return: should be null
*/
#include "holberton.h"
void print_rev(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
