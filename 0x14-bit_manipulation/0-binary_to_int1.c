unsigned int binary_to_uint(const char *b)
{
  int total = 0;

  while (*b)
    {
      total *= 2;

      if (*b++ == '1')
	{
	  total += 1;
	}
    }
  return (total);
}
