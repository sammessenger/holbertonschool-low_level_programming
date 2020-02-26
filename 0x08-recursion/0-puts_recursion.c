/**
 * _puts_recursion - should recursively print a string
 * @s: string to print
 * Return: void
*/
#include "holberton.h"
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}

}