#include "search_algos.h"

/**
 *linear_search- Linear search algorithm
 *
 *@array: Array to be searched
 *@size: Size of array
 *@value: Value being searched for
 *
 *Return: int
 */

int linear_search(int *array, size_t size, int value)
{
size_t count = 0;
if (array == NULL)
{
return (-1);
}

while (count < size)
{
printf("Value checked array[%ld] = [%d]\n", count, array[count]);
if (array[count] == value)
{
return (count);
}
count++;
}
return (-1);
}
