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
int i;
int diag1 = 0, diag2 = 0;
for (i = 0; i < size; i++)
{
diag1 = diag1 + a[(size * i) + i];
diag2 = diag2 + a[(size * (i + 1)) - (i + 1)]; 
}
printf("%d, %d", diag1, diag2);
}
