/**
 * main - shoould compute and print sum of all multiples of 3 or 5 below 1024
 *
 * Return: should be null
*/
#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		sum += i;
		}
	}
	printf("%i \n", sum);
	return (0);
}
