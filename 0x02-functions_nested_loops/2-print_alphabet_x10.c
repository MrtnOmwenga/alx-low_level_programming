#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet_x10 - Prints a character
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
int a;
char c;
for (a = 0; a < 10; a++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}
