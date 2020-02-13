#include "holberton.h"

/**
 * print_diagonal - should print diagonal lines
 * @n: lines to be printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, a;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < i; a++)
			{
				_putchar(' ');
			}



			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
