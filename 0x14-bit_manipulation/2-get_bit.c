/**
 *get_bit- Gets bit of a certain index
 *
 *
 *@n: Integer
 *@index: Index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i = 0;
unsigned int dup = n, count = 0;

if (n == 0)
{
return (0);
}
while (dup > 0)
{
dup /= 10;
count++;
}
if (index > dup)
{
return (0);
}
while (n > 0)
{
if (i == index)
{
return (n % 2);
}
i++;
n /= 2;
}
return (-1);
}
