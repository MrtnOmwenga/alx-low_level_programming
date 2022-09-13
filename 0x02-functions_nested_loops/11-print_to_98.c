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
void print_to_98(int c)
{
if (c <= 98)
{
for (; c <= 98; c++)
{
printf("%d", c);
if (c < 98)
{
printf(',');
printf(' ');
}
}
}
else
{
for (; c >= 98; c--)
{
printf("%d", c);
if (c < 98)
{
printf(',');
printf(' ');
}
}
}
}
