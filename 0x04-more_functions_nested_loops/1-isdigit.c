#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit- Checks whether character passed is a digit
 *
 *@c: Character to be checked
 *
 * Return: int
 */
int _isdigit(int c)
{
if (isdigit(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
