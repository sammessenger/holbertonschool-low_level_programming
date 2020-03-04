#include "holberton.h"
/**
 * free_grid - should free a grid
 * @height: height of grtid
 * @grid: grid
 * Return: void
*/
void free_grid_func(int **grid, int height)
{
	int i = 0;

	for (; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}


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

	c = malloc(height * sizeof(int *));
	if (!c)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		c[i] = malloc(width * sizeof(int));
		if (!c[i])
		{
			free_grid_func(c, i);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (a = 0; a < width; a++)
		{
			c[i][a] = 0;
		}
	}
	return (c);
}
