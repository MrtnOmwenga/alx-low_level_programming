#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intergerType;
char charType;
long int longType;
long long int longLongInt;
float floatype;
  
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(integerType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n",sizeof(longLongInt));
printf("Size of a float: %zu byte(s)\n", sizeof(floatype));
}
