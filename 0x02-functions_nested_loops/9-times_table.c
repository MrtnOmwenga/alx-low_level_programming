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
for (c = 0; c < 10; c++)
{
for (d = 0; d < 10; d++)
{
int e = d * f;
putchar(e + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
f++
}
}
