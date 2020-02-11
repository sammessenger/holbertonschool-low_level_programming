/**
 * times_tables - should print the nine times table
 *
 * Return: should be null
*/
#include "holberton.h"
void times_table(void)
{
	int i;
	int a;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			c = a * i;
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');

				if (a !=9)
				_putchar(',');
			}
			else
			{
				_putchar(c + '0');

				if (a != 9)
				_putchar(',');

				_putchar(' ');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
