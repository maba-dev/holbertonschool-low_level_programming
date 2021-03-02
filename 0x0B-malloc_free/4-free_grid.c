#include "holberton.h"
#include <stdlib.h>

/**
*free_grid - function that frees a 2 dimensional grid previously
*@grid: int
*@height: int
*return : void
*/
void	free_grid(int **grid, int height)
{
	height = height - 1;
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
