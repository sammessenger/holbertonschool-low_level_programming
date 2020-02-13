#include "holberton.h"
/**
 * print_line - should print n lines
 * @n: lines to be printed
 * Return: void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
