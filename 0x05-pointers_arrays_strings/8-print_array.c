/**
 * print_array - should print some of an array
 * @a: array to be printed
 * @n: nunber of elements to print
 * Return: void
*/
#include <stdio.h>
#include "holberton.h"
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	printf("%i, ", a[i]);

	printf("\n");
}
