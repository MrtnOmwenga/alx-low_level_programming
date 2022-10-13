#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *recursion- Recursion function
 *
 *@j: Counter
 *@n: Number
 *
 *Return: int
 */

int recursion(int n, int j)
{
int next = (j + n / j) / 2;
if (j * j <= n && (j + 1) * (j + 1) > n)
{
return (j);
}
else
{
return (recursion(n, next));
}
}

/**
 *_sqrt_recursion- Finds the square root of a number
 *
 *@n: the number
 *
 *Return: int
 */

int _sqrt_recursion(int n)
{
int e;
if (n > 0)
{
e = recursion(n, 1);
return (e);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1);
}
}
