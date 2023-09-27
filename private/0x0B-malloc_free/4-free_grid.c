#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free 2d array created by alloc -grid function.
 *@grid:to be freed.
 *@height:height of the array.
 *
 *Return:return a free program.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
