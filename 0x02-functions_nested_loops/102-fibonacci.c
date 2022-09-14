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
long int c, d = 1, e = 2, f = e + d;
printf("%ld, ", d);
printf("%ld, ", e);
for (c = 0; c < 48; c++)
{
printf("%ld", f);
if (c < 47)
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
