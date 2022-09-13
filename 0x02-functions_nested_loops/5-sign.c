#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_sign - Prints a character
 *
 * @c: character to be checked
 *
 * Return: int
 *
 */
int print_sign(int c)
{
if (c > 0)
{
putchar('+');
return (1);
}
else if (c == 0)
{
putchar(0 + '0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
