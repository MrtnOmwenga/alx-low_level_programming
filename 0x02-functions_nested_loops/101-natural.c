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
int c = 1023;
int d = 0;

for (; c >=0; c--)
{
if (c % 3 == 0 || c % 5 == 0)
{
d += c;
}
}
printf("%d", d);
return (0);
}
