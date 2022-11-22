#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

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
cs_t cspec[] = {
{'+', op_add},
{'-', op_sub},
{'*', op_mul},
{'/', op_div},
{'%', op_mod}
};

while (i < 5)
{
if (cspec[i].cs == *s)
{
return (cspec[i].f);
}
i++;
}
return (0);
}
