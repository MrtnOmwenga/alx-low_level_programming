#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 *print_strings- Prints numbers followed by new line
 *
 *@separator: Separator
 *@n: Number of arguments
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
va_list dup;
unsigned int i;

va_start(ap, n);
va_copy(dup, ap);
for (i = 0; i < n; i++)
{
if (va_arg(ap, char *) == NULL)
{
printf("(nil)");
}
else
{
printf("%s", va_arg(dup, char *));
}
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
