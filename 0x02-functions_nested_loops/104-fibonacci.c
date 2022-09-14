#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints a times table
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
long long unsigned int c, d = 1, e = 2, f = e + d;
printf("%lld, ", d);
printf("%lld, ", e);
for (c = 0; c < 96; c++)
{
printf("%lld", f);
if (c < 95)
{
printf(", ");
}
d = e;
e = f;
f = e + d;
}
printf("\n");
return (0);
}
