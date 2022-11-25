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
unsigned long int mask = 18014398509481984u;
unsigned int flag = 0;

if (n == 0)
{
_putchar(0 + '0');
}
while (mask > 0)
{
if ((n & mask) == 0)
{
if (flag)
{
_putchar(0 + '0');
}}
else
{
_putchar(1 + '0');
flag = 1;
}
mask = mask >> 1;
}
}
