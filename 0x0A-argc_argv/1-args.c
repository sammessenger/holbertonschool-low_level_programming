#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: count of arguments
 * @argv: arguments
 * Return: should be 0
*/
int main(int argc, char *argv[])
{
	if (*argv)
	printf("%i\n", argc - 1);

	return (0);
}
