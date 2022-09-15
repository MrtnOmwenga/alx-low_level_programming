#include <stdio.h>
#include "main.h"

/**
 *print_number- Prints a number
 *
 *@n: Number to be printed
 *
 *Return: void
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
}
if (n / 10)
{
print_number(n / 10);
}
if (n != 0)
{
_putchar(n % 10 + '0');
}
}
