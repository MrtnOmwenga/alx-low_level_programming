#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * _isalpha - Prints a character
 *
 * @c: character to be checked
 *
 * Return: int
 *
 */
int _isalpha(int c)
{
if (isalpha(c) == 1 || isalpha(c) == 2)
{
return (1);
}
else
{
return (0);
}
}
