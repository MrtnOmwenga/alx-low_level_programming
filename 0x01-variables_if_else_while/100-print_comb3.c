#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
/* your code goes there */
int c;
int d;
for (c = 0; c < 10; c++)
{
for (d = c + 1; d < 10 ; d++)
{
putchar((c % 10) + '0');
putchar((d % 10) + '0');
if (c < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
