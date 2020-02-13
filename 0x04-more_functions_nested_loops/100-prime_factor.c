/**
 * main - should find the largest prime factor of a large number
 * Return: should be 0
*/
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int i;
	long n, a, b;

	n = 612852475143;
	a = -1;
	b = sqrt(n);

	while (n % 2 == 0)
	{
		a = 2;
		n = n / 2;
	}
	for (i = 3; i < b; i = i + 2)
	{
		while (n % i == 0)
		{
			a = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		a = n;
	}
	printf("%li \n", a);
	return (0);
}
