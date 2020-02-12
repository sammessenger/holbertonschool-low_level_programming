/**
 * main - print first 50 fibbonaci
 *
 * Return: should be null
*/
#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int i;
	int a = 1;
	int b = 1;
	int c = 0;

	for (i = 0; i < 50; i++)
	{
		printf("%i, ", c);
		a = b + c;
		b = c;
		c = a;
	}
	printf("\n");
	return (0);
}
