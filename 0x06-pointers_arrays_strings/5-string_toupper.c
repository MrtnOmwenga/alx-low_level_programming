#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *string_toupper- Converts from lowecase to upercase
 *
 *@str: String to be converted
 *
 *Return: char *
 */

char *string_toupper(char *str)
{
int c = 0;
while (str[c])
{
str[c] = toupper(str[c]);
c++;
}
return (str);
}
