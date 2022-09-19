#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts2- Prints every other character
 *
 *@str: String to be printed
 *
 *Return: void
 */

void puts2(char *str)
{
int c;
int size = strlen(str);
for (c = 0; c < size; c++)
{
putchar(str[c]);
c++;
}
putchar('\n');
}
