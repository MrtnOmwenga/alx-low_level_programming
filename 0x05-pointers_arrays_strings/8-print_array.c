#include <stdio.h>
#include "main.h"

/**
 *print_array- Prints n elements of an array
 *
 *@a: Array to be printed
 *@n: Number of elements to be printed
 *
 *Return: void
 */

void print_array(int *a, int n)
{
int c;
for (c = 0; c < n; c++)
{
printf("%d", a[c]);
if (c < n - 1)
{
printf(", ");
}
}
printf("\n");
}
