#include <stdlib.h>

/**
 *array_range- Creates an array of integers
 *
 *@min: Small number
 *@max: Large number
 *
 *Return: int
 */

int *array_range(int min, int max)
{
int *numbers;
int i = 0;

if (max < min)
{
return (NULL);
}
else
{
numbers = (int *)malloc((max - min + 1) * sizeof(int));
if (numbers == NULL)
{
free (numbers);
return (NULL);
}
else
{
while (min <= max)
{
numbers[i] = min;
min++;
i++;
}
return (numbers);
}}}
