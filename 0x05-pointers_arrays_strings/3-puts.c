/**
 * _puts - should print a string then a newline
 * @str: string to be printed
 * Return: void
*/
#include "holberton.h"
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	_putchar(str[i]);

	_putchar('\n');
}
