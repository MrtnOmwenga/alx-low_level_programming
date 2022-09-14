#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/**
 * main - Prints a times table
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int c;
int64_t d;
int64_t e;
int64_t f;
d = 1;
e = 2;
f = e + d;
printf("%ld, ", d);
printf("%ld, ", e);
for (c = 0; c < 96; c++)
{
printf("%ld", f);
if (c < 95)
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
