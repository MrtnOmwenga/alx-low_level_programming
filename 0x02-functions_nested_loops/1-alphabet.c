#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - Prints a character
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
