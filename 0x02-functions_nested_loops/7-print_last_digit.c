#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
c = c % 10;
putchar(c + '0');
return (c);
}
