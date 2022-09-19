#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *print_rev- Prints a string in reverse
 *
 *@s: String to be reversed
 *
 *Return: void
 */

void print_rev(char *s)
{
int c;
int size = strlen(s);
for (c = size - 1; c >= 0; c--)
{
putchar(s[c]);
}
putchar('\n');
}
