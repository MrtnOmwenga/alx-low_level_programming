#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion- Returns a number raised to the power of another
 *
 *@x: Base
 #@y: Index
 *
 *Return: int
 */

int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, y-1));
}
else if (y == 0)
{
return (1);
}
else
{
return (-1);
}
}
