#include <stdio.h>
#include <stdlib.h>

/**
 *main- Prints the product of two numbers
 *
 *@argc: Argument count
 *@argv: Numbers
 *
 *Return: int
 */

int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("Error \n");
return (1);
}
else
{
int e = atoi(argv[1]);
int f = atoi(argv[2]);
printf("%d\n", e * f);
return (0);
}
}
