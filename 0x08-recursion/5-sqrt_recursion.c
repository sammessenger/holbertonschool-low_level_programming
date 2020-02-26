#include "holberton.h"
/**
 * _sqrt_recursion - should calculate square root recursively
 * @n: number to calculate
 * Return: sqrt of n
*/
int recalc(int x, int y)
{
	return ((y + (x / y)) / 2);
}
int test (int x, int y)
{
	if (x / y == y)
	{
		if (x % y == 0)
		return (y);

		else
		return (-1);
	}
	else
	{
		return (test(x, recalc(x, y)));
	}

}
int _sqrt_recursion(int n)
{
	if (n != -1)
	return (test(n, 1));

	else
	return (-1);
}
