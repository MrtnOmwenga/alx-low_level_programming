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
return (1);
exit(98);
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
return (0);
}
}
