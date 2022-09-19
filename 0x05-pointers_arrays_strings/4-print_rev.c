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
for (c = strlen(*s); c >= 0; c ++)
{
strrev(s);
puts(s);
}
