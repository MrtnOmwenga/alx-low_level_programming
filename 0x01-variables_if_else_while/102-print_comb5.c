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
int f;
int e;
for (c = 0; c < 100; c++)
{
for ( e = c + 1 ; e < 100 ; e++)
{
if (c > 9)
{
d = c;
while (d > 10)
{
d = d / 10;
}
}
else
{
d = 0;
}
if (e > 9)
{
f = e;
while (f > 10)
{
f = f / 10;
}
}
else
{
f = 0;
}
putchar((d % 10) + '0');
putchar((c % 10) + '0');
putchar(' ');
putchar((f % 10) + '0');
putchar((e % 10) + '0');
if (c < 98)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
