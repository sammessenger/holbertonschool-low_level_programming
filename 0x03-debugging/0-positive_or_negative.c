#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - should determine a random number's sign
 *
 * Return: should be null
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
