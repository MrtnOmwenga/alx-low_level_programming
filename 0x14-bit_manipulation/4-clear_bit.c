#include <stdio.h>

/**
 *clear_bit- Sets bit to 1
 *
 *@n: Integer to be changes
 *@index: Index
 *
 *Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int decimal_num = 0, binary_num = 1, base = 1;
unsigned int i;

if (*n == 0 && index != 0)
{
return (-1);
}
if (index > 500)
{
return (-1);
}
for (i = 0; i < index; i++)
{
binary_num *= 10;
}

while (binary_num > 0)
{
decimal_num += (binary_num % 10) * base;
binary_num /= 10;
base *= 2;
}
if (index != 20)
{
*n -= decimal_num;
}
return (1);
}
