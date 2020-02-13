/**
 * more_numbers - should print 10 times 1-14
 * Return: should be null
*/
#include "holberton.h"
void more_numbers(void)
{
	int i, a, c;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				c = a % 10;
				_putchar('1');
			}
			else if (a < 10)
			{
				c = a;
			}
			_putchar(c + '0');

		}
		_putchar('\n');
	}

}
