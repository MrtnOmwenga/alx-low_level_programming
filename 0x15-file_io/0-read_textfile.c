#include "main.h"

/**
 *read_textfile- Reads a text file
 *
 *@filename: File name
 *@letters: Number of characters to read
 *
 *Return: Read data
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd, sz;
  char *c = (char *)malloc(sizeof(char) * letters);

  if (filename == NULL)
    {
      return (0);
    }
  fd = open(filename, O_RDONLY);
  if (fd < 0)
    {
      return (0);
    }
  sz = read(fd, c, letters * sizeof(char));
  c[sz] = '\0';
  printf("%s\n", c);
  return (sz);
}
