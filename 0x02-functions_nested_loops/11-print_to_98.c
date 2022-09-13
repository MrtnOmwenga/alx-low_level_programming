#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_to_98 - Prints a character
 *
 * @c: character to be checked
 *
 * Return: int
 *
 */
int print_to_98(int c)
{
if (c <= 98)
{
for (c ; c <= 98; c++)
{
_putchar(c);
if (c < 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (c ; c >= 98; c--)
{
_putchar(c);
if (c < 98)
{
_putchar(',');
putchar(' ');
}
}
}
}
