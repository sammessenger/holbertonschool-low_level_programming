/**
 * print_diagsums - should print both diagonal sums of an array of ints
 * @a: array to be added
 * @size: size of array
 * Return: void
*/
#include "holberton.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int i;
	int print = 0;
	int print2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		print += a[i];
	}
	for (i = ((size * size) - size); i > 0; i-= (size - 1))
	{
		print2 += a[i];
	}
	printf("%i, ", print);
	printf("%i\n", print2);
}
