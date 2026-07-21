#include <stdlib.h>
#include "main.h"

/**
 * free_grid- Write a function that frees a grid of its elements.
 * @grid: pointer to a pointer to a grid
 * @height: height - how big the array is
 *
 * Return: pointer to the created array, or NULL if size is 0 or malloc fails
 */
void free_grid(int **grid, int height)
{
	int length;

	length = 0;
	if (grid == NULL)
	{
		return;
	}
	while (length < height)
	{
		free(grid[length]);
		length++;
	}

	free(grid);

}
