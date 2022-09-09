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
for (c = 0; c < 10; c++)
{
putchar((c % 10) + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
