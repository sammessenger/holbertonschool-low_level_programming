#include "holberton.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: arguments
 * Return: should be 0
*/
int main(int argc, char *argv[])
{
	int i;

	char a = 'c';

	char *c = &a;

	if (argv && argc)
	{
		i = atoi(c);
		printf("%i\n", i);
	}
	return (0);
}
