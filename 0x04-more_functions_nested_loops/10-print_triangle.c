/**
 * print_triangle - should print a triangle of size size
 * @size: size of triangle
 * Return: void
*/
#include "holberton.h"
void print_triangle(int size)
{
	int y, space, hash;

	if (size > 0)
	{
		{
			for (y = 0; y < size; y++)
			{
				for (space = 0; space <= (size - y - 1); space++)
				{
					_putchar(' ');
				}
				for (hash = 0; hash <= y; hash++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
