/**
 * print_to_98 - should print from n to 98
 *
 * @n: reference number
 *
 * Return: should be null
*/
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i", n);
		if (n < 98)
		{
			n++;
			printf(", ");
		}
		else if (n > 98)
		{
			n--;
			printf(", ");
		}
	}
	printf("98");
	printf("\n");
}
