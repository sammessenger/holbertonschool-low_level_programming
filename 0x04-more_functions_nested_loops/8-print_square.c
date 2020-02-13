#include "holberton.h"
/**
 * print_square - should print a square
 * @size: size of square
 * Return: void
*/
void print_square(int size)
{
	int i, a;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
