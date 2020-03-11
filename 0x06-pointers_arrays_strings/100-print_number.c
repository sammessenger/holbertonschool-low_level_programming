/**
 * print_number - should print an int one digit at a time
 * @n: number to be printed
 * Return: should be null
*/
#include "holberton.h"
void print_number(int n)
{

	unsigned int num;

	if (n < 0)
	{
	_putchar('-');
	num = -n;
	}
	
	if (num / 10 > 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
