/**
 * free_grid - should free a 2d dymanic array
 * @grid: pointer to grid
 * @height: height of grid
 * Return: void
*/
#include "holberton.h"
void free_grid(int **grid, int height)
{
	if (!grid)
		return (NULL);

	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
