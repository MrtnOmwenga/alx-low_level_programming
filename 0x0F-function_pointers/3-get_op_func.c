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
if (*s == '+')
{
return (op_add);
}
else if (*s == '-')
{
return (op_sub);
}
else if (*s == '*')
{
return (op_mul);
}
else if (*s == '/')
{
return (op_div);
}
else if (*s == '%')
{
return (op_mod);
}
else
{
printf("Error\n");
exit(98);
}
}
