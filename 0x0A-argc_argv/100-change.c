#include <stdio.h>
#include <stdlib.h>

/**
 *main- Prints max number of coins reqiored for change
 *
 *@argc: Argument count
 *@argv: Argument array
 *
 *Return: int
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1); }
else if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0); }
else
{
int change = atoi(argv[1]);
int coins = 0;

while (change >= 25)
{
change = change - 25;
coins++; }
while (change >= 10)
{
change = change - 10;
coins++; }
while (change >= 5)
{
change = change - 5;
coins++; }
while (change >= 2)
{
change = change - 2;
coins++; }
while (change > 0)
{
change = change - 1;
coins++; }
printf("%d\n", coins);
return (0);
}}
