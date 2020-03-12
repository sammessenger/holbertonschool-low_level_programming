#include "3-calc.h"
/**
 * main - entry point
 *
 * @argc: # of args passed
 *
 * @argv: array of args
 *
 * Return: should be 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	result = (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	printf("%d\n", result);
	return (0);
}
