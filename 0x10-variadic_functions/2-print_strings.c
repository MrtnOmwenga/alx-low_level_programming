#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 *print_numbers- Prints numbers followed by new line
 *
 *@separator: Separator
 *@n: Number of arguments
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char string[100];

va_start(ap, n);
for (i = 0; i < n; i++)
{
strcpy(string, va_arg(ap, char *));
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
