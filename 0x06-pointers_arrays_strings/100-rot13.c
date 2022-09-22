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
e = d + 13;
str[c] = e;
c++;
}
return (str);
}
