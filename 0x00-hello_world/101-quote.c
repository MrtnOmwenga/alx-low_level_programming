#include <stdio.h>

/**
 *main- Entry point
 *
 *Description: Prints Programming is like a puzzle
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
int c;
char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (c = 0 ; c < 59 ; c++)
{
putchar(string[c]);
}
putchar('\n');
return (1);
}
