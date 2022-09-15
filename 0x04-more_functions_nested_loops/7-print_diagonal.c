#include <stdio.h>
#include "main.h"

/**
 *print_diagonal- Prints a diagonal line
 *
 *@n: Number of times the \ is printed
 *
 *Return: void
 */

void print_diagonal(int n)
{
int d, e;
if (n > 0)
{
for (d = 0; d < n; d++)
{
for (e = 0; e < d; e++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
putchar('\n');
}
}
