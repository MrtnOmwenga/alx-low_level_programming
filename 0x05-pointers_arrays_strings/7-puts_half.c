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
int portion = size / 2;
int c;

for (c = portion; c < size; c++)
{
putchar(str[c]);
}
putchar('\n');
}
