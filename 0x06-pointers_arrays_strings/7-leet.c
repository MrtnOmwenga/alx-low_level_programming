#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *leet- Converts string to 1337
 *
 *@str: String to be converted
 *
 *Return: char *
 */

char *leet(char *str)
{
int c, d;
char chars[11] = "aAeEoOtTlL";
char leet[11] = "4433007711";
while (str[c])
{
for (d = 0; d < 10; d++)
{
if (str[c] == chars[d])
{
str[c] = leet[d];
}
}
c++;
}
return (str);
}
