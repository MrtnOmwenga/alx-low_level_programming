#include <stddef.h>

/**
 *int_index- Checks the results of cmp
 *
 *@array: Array of elements to be checked
 *@cmp: Function that compares values
 *@size: Number of elements in array
 *
 *Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if ((*cmp) != NULL && size >= 0)
{
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
{
return (i);
break;
}}
return (-1);
}
else
{
return (-1);
}}
