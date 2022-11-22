#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main- Check code
 *
 *@argc: Argument count
 *@argv: Argument vector
 *
 *Return: int
 */

int main(int argc, char *argv[])
{
int num1, num2, result;
int (*funct)(int num1, int num2);
if (argc != 4)
{
printf("Error\n");
return (98);
exit(98);
}
else if (*argv[2] != '+' && *argv[2] != '-' &&
	  *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
{
printf("Error\n");
exit(99);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
funct = get_op_func(argv[2]);
result = (*funct)(num1, num2);
if (result != 1001001)
{
printf("%d\n", result);
}
else
{
printf ("Error\n");
exit(100);
}
return (0);
}
}
