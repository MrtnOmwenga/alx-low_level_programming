#include <stdio.h>
#include "main.h"

/**
 *reverse_array- Reverses an array
 *
 *@a: Array to be reversed
 *@n: Number of elements in array
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
int c, f;
int d[100];
int e = 0;
for (c = n - 1; c >= 0; c--)
{
d[e] = a[c];
e++;
}
for (f = 0; f < n; f++)
{
a[f] = d[f];
}
}
