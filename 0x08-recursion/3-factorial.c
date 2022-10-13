#include <stdio.h>
#include "main.h"

/**
 *factorial- Prints the factorial of a given number' *
 *
 *@n: Given Number
 *
 *Return: Int
 */

int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else
{
return (-1);
}
}
