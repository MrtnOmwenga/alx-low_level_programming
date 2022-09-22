#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 *cap_string- Capitalizes the first letter of each word
 *
 *@str: String to be capitalized
 *
 *Return: char *
 */

char *cap_string(char *str)
{
int c = 0, d;
char del[14] = " \t\n,;.!?\"(){}";
if (strlen(str) > 2)
{
while (str[c])
{
for (d = 0; d < 14; d++)
{
if (str[c] == del[d])
{
str[c + 1] = toupper(str[c + 1]);
}
}
c++;
}
}
return (str);
}
