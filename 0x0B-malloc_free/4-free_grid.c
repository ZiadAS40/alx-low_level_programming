#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2D array.
 * @grid: the array.
 * @height: the height of the array.
 * Return: 0.
 */
void free_grid(int **grid, int height)
{
	int i, j, width;

	width = sizeof(grid) / height;
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	free(grid[i]);
	}
	free(grid[i]);
}
