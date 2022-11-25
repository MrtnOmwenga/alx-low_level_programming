#include "main.h"

/**
 *print_binary- Converts integer to binary
 *
 *@n: Integer
 *
 *Return: void
 */

void print_binary(unsigned long int n)
{
unsigned int mask = 32768;


while (mask > 0)
{
if ((n & mask) == 0)
{
_putchar(0 + '0');
}
else
{
_putchar(1 + '0');
}
mask = mask >> 1;
}
}
