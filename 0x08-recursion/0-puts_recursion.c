#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_puts_recursion- Prints a string using recursion
 *
 *@s: String to be printed
 *
 *Return: void
 */

void _puts_recursion(char *s)
{
int i = 0;
while (s[i])
{
putchar(s[i]);
i++;
}
putchar('\n');
}
