#include <stdio.h>
#include "main.h"

/**
 *rot13- Encodes string using rot13
 *
 *@str: String to be encoded
 *
 *Return: char *
 */

char *rot13(char *str)
{
int c, d, size = sizeof(str) / sizeof(char *);
char src[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char dest[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

for (c = 0; c < size - 1; c++)
{
for (d = 0; d < 52; d++)
{
if (str[c] == src[d])
{
str[c] = dest[d];
}
}
}
return (str);
}
