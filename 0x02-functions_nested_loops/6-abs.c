/**
 * _abs - should compute absolute value of integer
 *
 * @n: integer to be computed
 *
 * Return: should be absolute value of integer
*/
#include "holberton.h"
int _abs(int n)
{
	int a;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		a = n - (2 * n);
		return (a);
	}
}
