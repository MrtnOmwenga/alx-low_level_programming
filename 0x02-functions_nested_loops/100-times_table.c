#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *print_times_table - Prints a times table
 *
 * @n: Number for table
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
if (n <= 15 && n >= 0)
{
for (c = 0; c <= n; c++)
{
for (d = 0; d <= n; d++)
{
e = d * f;
if (e > 9 && e < 100)
{
if (d > 0)
{
putchar(' '); }
printf("%d", e);
if (d < n)
{
putchar(',');
putchar(' '); }}
else if (e <= 9)
{
if (d > 0)
{
putchar(' ');
putchar(' '); }
putchar(e + '0');
if (d < n)
{
putchar(',');
putchar(' '); }}
else
{
printf("%d", e);
if (d < n)
{
putchar(',');
putchar(' '); }}}
putchar('\n');
f++; }}}
