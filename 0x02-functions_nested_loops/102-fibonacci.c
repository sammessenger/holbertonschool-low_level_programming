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
	long a = 1;
	long b = 1;
	long c = 1;

	for (i = 0; i < 50; i++)
	{
		printf("%li, ", c);
		a = b + c;
		b = c;
		c = a;
	}
	printf("\n");
	return (0);
}
