/**
 * print_triangle - should print a triangle of size size
 * @size: size of triangle
 * Return: void
*/
#include "holberton.h"
void print_triangle(int size)
{
	int y, space, hash;

	{
		for (y = 0; y < size; y++)
		{
			for (space = 0; space <= (size - y); space++)
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
