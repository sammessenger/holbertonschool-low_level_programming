/**
* print_alphabet_x10 - should print the alphabet 10 times
*
* Return: should be null
*/
#include "holberton.h"
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
