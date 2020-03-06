#include "holberton.h"
/**
 * array_range - should create an array from min to max
 * @min: first number
 * @max: second number
 * Return: should be pointer to the array
*/
int *array_range(int min, int max)
{
	int *p;
	int i;
	int a = 0;

	if (min > max)
		return (NULL);

	i = max - min + 2;

	p = malloc(sizeof(int) * i);

	for (i = min; i < max; i++, a++)
	{
		p[a] = i;
	}
	return (p);
}
