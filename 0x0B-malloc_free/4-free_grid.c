#include "main.h"


/**
* free_grid - free the grid
*
* @grid: memory block to be freed
* @height: height of the array
*Return: void
*/

void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free(grid[a]);

	free(grid);
}
