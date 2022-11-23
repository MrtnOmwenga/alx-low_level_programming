#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers- Prints numbers followed by new line
 *
 *@separator: Separator
 *@n: Number of arguments
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

if (n != 0)
{
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i != n - 1 and separator != NULL)
{
printf("%c", *separator);
}
else
{
printf("\n");
}
}
}
}
