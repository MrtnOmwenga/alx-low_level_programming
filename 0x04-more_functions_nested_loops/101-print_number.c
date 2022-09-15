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
if (n > 0) {
print_number(n / 10);
_putchar((n % 10) + '0');
}
else if (n < 0)
{
n *= -1;
_putchar('-');
print_number(n / 10);
_putchar((n % 10) + '0');
}
if (n == 0)
{
_putchar(0 + '0');
}
}
