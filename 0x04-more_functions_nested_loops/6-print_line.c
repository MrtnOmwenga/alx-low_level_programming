#include <stdio.h>
#include "main.h"

/**
 *print_line- Prints a line
 *
 *@n: length of line
 *
 *Return: void
 */

void print_line(int n)
{
int d;
if (n > 0)
{
for (d = 0; d < n; d++)
{
_putchar('_');
}
}
_putchar('\n');
}
