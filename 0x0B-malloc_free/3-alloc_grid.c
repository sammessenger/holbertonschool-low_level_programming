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

	c = malloc(width * sizeof(int *));
	if (!c)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		c[i] = malloc(height * sizeof(int));
		if (!c[i])
		{
			for (i = 0; i < width && c[i]; i++)
			{
				free(c[i]);
			}
			free(c);
			return (NULL);
		}
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
