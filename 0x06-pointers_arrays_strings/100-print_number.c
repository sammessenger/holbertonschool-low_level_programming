/**
 * print_number - should print an int one digit at a time
 * @n: number to be printed
 * Return: should be null
*/
#include "holberton.h"
void print_number(int n)
{
	if (n < 0)
	_putchar('-');
	n += n;


	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
