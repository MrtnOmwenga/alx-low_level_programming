#include <stdio.h>
#include "main.h"

/**
 *print_diagsums- prints sums of diagonal numbers
 *
 *@a: Array
 *@size: Size of array
 *
 *Return: void
 */

void print_diagsums(int *a, int size)
{
int i, j;
int diag1 = 0, diag2 = 0;
for (i = 0; i < size; i++)
{
diag1 = diag1 + a[i][i];
}
for (j = size; j > 0; j--)
{
diag2 += a[j][j];
}
printf("%d, %d", diag1, diag2);
}
