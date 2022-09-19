#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *puts_half- Prints half of a tring
 *
 *@str: String to be printed
 *
 *Return: void
 */

void puts_half(char *str)
{
int size = strlen(str);
int portion;
int c;
if (size % 2 == 0)
{
portion  = 2;
}
else
{
portion = (size - 1) / 2;
}
for (c = portion; c < size; c++)
{
putchar(str[c]);
}
putchar('\n');
}
