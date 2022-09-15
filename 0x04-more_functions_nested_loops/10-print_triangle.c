#include <stdio.h>
#include "main.h"

/**
 *print_triangle- Prints a triangle
 *
 *@size: Size of the triangle
 *
 *Return: void
 */

void print_triangle(int size)
{
int c, d, e = size;
if (size > 0)
{
for (c = 0; c < size; c++)
{
e--;
for (d = 0; d < size; d++)
{
if (d < e)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
