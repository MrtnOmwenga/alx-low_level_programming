#include <stdio.h>
#include "main.h"

/**
 *rot13- Encodes string using rot13
 *
 *@str: String to be encoded
 *
 *Return: char *
 */

char *rot13(char *str)
{
int c = 0, d;
char e;
while (str[c])
{
d = str[c];
if (((d >= 97 && d <= 122) || (d >= 65 && d <= 90)) && (d > 109 || (d > 77 && d < 91)))
{
e = d - 13;
str[c] = e;
}
else if (((d >= 97 && d <= 122) || (d >= 65 && d <= 90)) && (d <= 109 || (d < 77 && d > 91)))
{
e = d + 13;
str[c] = e;
}
c++;
}
return (str);
}
