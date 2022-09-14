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
long int c, d = 1, e = 2, f = e + d, g = 0;
while (f <= 4000000)
{
if (f % 2 == 0)
{
g += f;
}
d = e;
e = f;
f = e + d;
}
printf("%ld\n", g);
return (0);
}
