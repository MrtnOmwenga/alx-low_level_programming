#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_last_digit - Prints a character
 *
 * @c: character to be checked
 *
 * Return: int
 *
 */
int print_last_digit(int c)
{
if (c < 0)
{
c *= -1;
}
c = c % 10;
_putchar(c + '0');
return (c);
}
