#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
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
fwrite(c);
if (c < 98)
{
fwrite(',');
fwrite(' ');
}
}
}
else
{
for (; c >= 98; c--)
{
fwrite(c);
if (c < 98)
{
fwrite(',');
fwrite(' ');
}
}
}
}
