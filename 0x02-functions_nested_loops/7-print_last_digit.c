/**
 * print_last_digit - should print last digit of int n
 *
 * @n: number whose last digit is to be printed
 *
 * Return: should be value of last digit
*/
#include "holberton.h"
int print_last_digit(int n)
{
	int a;

	if (n > 0)
	{
		a = n % 10;
		_putchar(a + '0');
		return (a);
	}
	else if (n < 0)
	{
		a = -(n % 10);
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
