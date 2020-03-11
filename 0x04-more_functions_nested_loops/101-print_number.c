#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_number - should print an integer
 * @n: integer to be printed
 * Return: void
 *
*/
void print_number(int n)
{
	int digits, temp;

	temp = n;

	while (temp != 0)
	{
		temp = temp / 10;
		digits++;
	}
	printf("%i\n", digits);
}
