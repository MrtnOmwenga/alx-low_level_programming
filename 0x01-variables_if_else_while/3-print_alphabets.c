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
char c;
char d;
for (c = 'a'; c < 'z'; c++)
{
putchar(c);
}
for (d = 'A'; d < 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
