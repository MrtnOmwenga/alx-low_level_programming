#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 *op_add- adds numbers
 *
 *@a: First number
 *@b: Second number
 *
 *Return: int
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub- Subtracts numbers
 *
 *@a: First number
 *@b: Subtracts numbers
 *
 *Return: int
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul- Multiplies numbers
 *
 *@a: First number
 *@b: Second number
 *
 *Return: int
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div- Divides numbers
 *
 *@a: First number
 *@b: second number
 *
 *Return: int
 */

int op_div(int a, int b)
{
if (b == 0)
{
return (1001001);
printf("Error\n");
exit(100);
}
else
{
return (a / b);
}
}

/**
 *op_mod- Calculates the modulus
 *
 *@a: First number
 *@b: Second number
 *
 *Return: int
 */

int op_mod(int a, int b)
{
if (b == 0)
{
return (1001001);
printf("Error\n");
exit(100);
}
else
{
return (a % b);
}
}
