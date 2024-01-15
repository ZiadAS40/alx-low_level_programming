#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate memory for 2D array.
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width < 1 && height < 1)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		a[j] = malloc(width * sizeof(int));
		if (a[j] == NULL)
		{
			for (i = 0; i < j; i++)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
