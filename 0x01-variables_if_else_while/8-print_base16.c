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
for (c = 0; c <= 15; c++)
{
if (c < 10)
{
d = c + 48;
putchar(d);
}
else if (c >= 10)
{
d = c + 87;
putchar(d);
}
}
printf("\n");
return (0);
}
