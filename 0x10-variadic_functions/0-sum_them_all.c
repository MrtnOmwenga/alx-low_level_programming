#include <stdarg.h>

/**
 *sum_them_all- Return sum of numbers
 *
 *@n: Number of elements
 *
 *Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
int result = 0;
va_list ap;
unsigned int i;

if (n != 0)
{
va_start(ap, n);
for (i = 0; i < n; i++)
{
result += va_arg(ap, int);
}
va_end(ap);
return (result);
}
else
{
return (0);
}
}
