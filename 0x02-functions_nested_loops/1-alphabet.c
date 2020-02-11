/**
* print_alphabet - should print the alphabet
*
* Return: should be null
*/
#include "holberton.h"
void print_alphabet(void)
{
	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
