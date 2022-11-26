#include "main.h"

/**
 *flip_bits- Counts how many bits need to be flipped to get at a number
 *
 *@n: Integer
 *@m: Reference integer
 *
 *Return: void
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int mask = 9223372036854775808u;
unsigned int count = 0;

while (mask > 0)
{
if ((n & mask) != (m & mask))
{
count++;
}
mask = mask >> 1;
}
return (count);
}
