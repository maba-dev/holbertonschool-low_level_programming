#include "holberton.h"
#include <stdlib.h>

/**
*alloc_grid - function that return a pointer to a 2-D array of integers
*@width: int
*@height: int
*Return: int
*/
int	**alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	i = 0;
	if (width == 0 || height == 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		j = 0;
		grid[i] = malloc(width * sizeof(int));
		while (j < width)
		{
			if (grid[i] == NULL)
			{
				j = 0;
				while (j < i)
				{
					free(grid[j]);
					j++;
				}
				free(grid);
				return (NULL);
			}
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
