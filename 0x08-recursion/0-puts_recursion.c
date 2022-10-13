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
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
