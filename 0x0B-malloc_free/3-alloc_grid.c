#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid- Creates a 2d array
 *
 *@width: Width of the array
 *@height: Height of the array
 *
 *Return: char **
 */

int **alloc_grid(int width, int height)
{
int i, j;
int flag = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
int **arr;
arr = malloc(height * width * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
flag = 1;
break;
}}
if (flag == 1)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}}
return (arr);
}}}}
