#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *rev_string- Reverses a string
 *
 *@s: String to be reversed
 *
 *Return: void
 */

void rev_string(char *s)
{
char r[1000];
int size = strlen(s);
int c, d = 0, i;

for (c = size - 1; c >= 0; c--)
{
r[d] = s[c];
d++;
}
r[d] = '\0';
for (i = 0; i < size; i++)
{
s[i] = r[i];
}
}
