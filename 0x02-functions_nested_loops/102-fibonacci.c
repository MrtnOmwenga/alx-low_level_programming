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
int c, d = 1, e = 2, f;
printf("%d, ",d);
printf("%d, ", e);
for (c = 0; c < 48; c++)
{
f = e + d;
printf("%d, ", f);
d = e;
e = f;
}
return (0);
}
