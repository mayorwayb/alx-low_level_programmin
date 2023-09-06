#include "main.h"
/**
 * free_grid - function that frees two dimensional grid
 * @grid: parameter
 * @height: parameter
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0 ; a < height ; a++)
		free(grid[a]);
	free(grid);
}
