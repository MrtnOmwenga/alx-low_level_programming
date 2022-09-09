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
for (c = 0; c < 100; c++)
{
if (c > 9)
{
d = c;
while (d > 10)
{
d = d / 10;
}
putchar((d % 10) + '0');
}
putchar((c % 10) + '0');
putchar(',');
putchar(' ');
}
//putchar('\n');
return (0);
}
