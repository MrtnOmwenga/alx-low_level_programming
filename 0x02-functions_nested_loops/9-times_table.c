#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * times_table - Prints a times table
 *
 * Return: void
 *
 */
void times_table(void)
{
int c;
int d;
int e;
int f = 0;
int g;
for (c = 0; c < 10; c++)
{
for (d = 0; d < 10; d++)
{
e = d * f;
if (e > 9)
{
g = e;
while (g > 9)
{
g = g / 10;
}
putchar(g + '0');
}
putchar((e % 10) + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
f++;
}
}
