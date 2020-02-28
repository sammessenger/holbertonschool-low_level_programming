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
	int i = 0;

	for (; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
