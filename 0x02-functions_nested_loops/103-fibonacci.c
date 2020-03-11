/**
 * main - print first 50 fibbonaci
 *
 * Return: should be null
*/
#include "holberton.h"
#include <stdio.h>

int main(void)
{
	long i = 0;
	long a = 1;
	long b = 1;
	long c = 1;

	while (a < 4000000 && b < 4000000)
	{
		printf("%li", c);
		a = b + c;
		b = c;
		c = a;
	}
	printf("\n");
	return (0);
}
