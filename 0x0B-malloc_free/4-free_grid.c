#include <stdio.h>
#include <stdlib.g>

/**
 *free_grid- frees a 2d array
 *
 *@gris: Pointer to the grid to be freed
 *@height: Height of the 2d array
 *
 *Return: void
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
