#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: string 1 to copy
 * @s2: string 2 to copy
 *
 * Return: pointer to the created array, or NULL if size is 0 or malloc fails
 */
int **alloc_grid(int width, int height)
{

	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			free (grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);

}