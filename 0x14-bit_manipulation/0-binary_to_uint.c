#include <stddef.h>

/**
 *binary_to_uint- Converts binary to int
 *
 *@b: Binary number
 *
 *Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int decimal_number = 0;

if (b == NULL)
{
return (0);
}

while (b[i])
{
if (b[i] != '1' && b[i] != '0')
{
return (0);
}
i++;
}

while (*b)
{
decimal_number *= 2;
if (*b++ == '1')
{
decimal_number += 1;
}
}
return (decimal_number);
}
