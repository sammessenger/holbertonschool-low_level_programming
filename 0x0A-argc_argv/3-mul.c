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

	if (argc > 2)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
