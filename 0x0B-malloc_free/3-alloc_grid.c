#include "holberton.h"
/**
 * alloc_grid - should malloc a grid of width * height
 * @width: width of array
 * @height: height of array
 * Return: a pointer to the array
*/
int **alloc_grid(int width, int height)
{
	int i, a = 0;
	int **c;

	if (height == 0 || width == 0)
		return (NULL);

	c = (int **)malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		c[i] = (int *)malloc(height * sizeof(int));
	}
	for (i = 0; i < width; i++)
	{
		for (a = 0; a < height; a++)
		{
			c[i][a] = 0;
		}
	}
	return (c);
}
