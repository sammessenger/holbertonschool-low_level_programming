/**
 * main - should print 1-100, multipes of 3 are fizz, and multiples of 5 are buzz. Both is fizzbuzz
 * Return: should be 0
*/
#include "holberton.h"
#include <stdio.h>
int main(void)
{
	int i;

	for(i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%i ", i);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
	}
	return (0);
}
