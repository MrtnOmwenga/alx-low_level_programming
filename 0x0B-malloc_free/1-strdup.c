#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup- Returns a pointer to astring which is a duplicate of another
 *
 *@str: String to be duplicated
 *
 *Return: char *
 */

char *_strdup(char *str)
{
char *s;
int len = 0, i = 0, j;
while (str[i])
{
len = len + 1;
i++;
}
s = malloc(sizeof(char) * len);
if (s == NULL)
{
return (NULL);
}
else
{
for (j = 0; j < len; j++)
{
s[j] = str[j];
}
return (s);
}
}
