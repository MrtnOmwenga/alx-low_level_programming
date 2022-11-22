#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *get_op_funct- Gets the regt function for an operation
 *
 *@s: Operator
 *
 *Return: int
 */

int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{'+', op_add},
{'-', op_sub},
{'*', op_mul},
{'/', op_div},
{'%', op_mod}
};

while (i < 5)
{
if (ops[i].op == *s)
{
return (ops[i].f);
}
i++;
}
return (0);
}
