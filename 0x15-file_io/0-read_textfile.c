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
int fd, sz, t;
char *c = (char *)malloc(sizeof(char) * letters);

if (c == NULL)
{
return (0);
}
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
sz = read(fd, c, letters);
if (sz < 0)
{
free(c);
return (0);
}
c[sz] = '\0';
close(fd);
t = write(STDOUT_FILENO, c, sz);
if (t < 0)
{
free(c);
return (0);
}
free(c);
return (t);
}
