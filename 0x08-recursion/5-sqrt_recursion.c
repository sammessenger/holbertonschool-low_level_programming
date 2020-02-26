#include "holberton.h"
/**
 * recalc - should help find sqrt
 * @x: first number
 * @y: second number
 * Return: average of x and x / y
*/
int recalc(int x, int y)
{
	return ((y + (x / y)) / 2);
}
/**
 * test - should test for sqrt
 * @x: first number
 * @y: second number
 * Return: sqrt if sqrt is found, or recurres to recalc
*/
int test(int x, int y)
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
/**
 * _sqrt_recursion - should calculate sqrt of n
 * @n: number to look for sqrt of
 * Return: sqrt of n
*/
int _sqrt_recursion(int n)
{
	if (n > 0)
	return (test(n, 1));


	else
	return (-1);
}
