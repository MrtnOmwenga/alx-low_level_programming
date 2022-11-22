#include <stddef.h>

/**
 *array_iterator- Iterates over an array passing each element to a function
 *
 *@array: Array of elements
 *@size: Size of array
 *@action: Function pointer
 *
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if ((*action) != NULL && array != NULL)
{
size_t i = 0;
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}}}
