#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *print_times_table - Prints a times table
 *
 * Return: void
 *
 */
void print_times_table(int n)
{
int c;
int d;
int e;
int f = 0;
int g;
if (n <= 15 && n >= 0)
{
for (c = 0; c <= n; c++)
{
for (d = 0; d <= n; d++)
{
e = d * f;
if (e > 9)
{
g = e;
while (g > 9)
{
g = g / 10; }
putchar(g + '0');
putchar((e % 10) + '0');
if (d < n)
{
putchar(',');
putchar(' ');
putchar(' '); }}
else
{
if (d > 0)
{
putchar(' '); }
putchar(e + '0');
if (d < n)
{
putchar(',');
putchar(' ');
putchar(' '); }}}
putchar('\n');
f++; }}}
