#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat- Concatenates two strings in a malloc str
 *
 *@s1: Forst string
 *@s2: second string
 *
 *Return: char *
 */

char *str_concat(char *s1, char *s2)
{
char *str;
int i = 0, j = 0, len1 = 0, len2 = 0;
int c, d, e = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
{
len1 = len1 + 1;
i++;
}
while (s2[j])
{
len2 = len2 + 1;
j++;
}
str = malloc(sizeof(char) * (len1 + len2 + 1));
if (str == NULL)
{
return (NULL);
}
else
{
for (c = 0; c < len1; c++)
{
str[c] = s1[c];
}
e = len1;
for (d = 0; d < len2; d++)
{
str[e] = s2[d];
e++;
}
return (str);
}}
