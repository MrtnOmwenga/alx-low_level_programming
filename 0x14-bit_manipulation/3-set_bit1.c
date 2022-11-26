int set_bit(unsigned long int *n, unsigned int index)
{
  unsigned long int binary_num = 0, base = 1, dup = *n, decimal_num = 0;
  unsigned int i = 0;
  while (dup > 0)
    {
      if (i == index)
	{
	  binary_num += (1 * base);
	  base *= 10;
	}
      else
	{
	  binary_num += ((binary_num % 2) * base);
	  base *= 10;
	}
      i++;
      dup /= 2;
    }
  base = 1;
  while (binary_num > 0)
    {
      decimal_num += ((binary_num % 10) * base);
      binary_num /= 10;
      base *= 2;
    }
  *n = decimal_num;
  return (1);
}
