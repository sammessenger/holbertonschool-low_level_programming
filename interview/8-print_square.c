#include "holberton.h"
void print_square(int size)
{
	int i;
	int a;

	for (i = 0; i < size; i++)
	{

		for (a = 0; a < size; a++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}
	if (size == 0)
	_putchar('\n');

}
