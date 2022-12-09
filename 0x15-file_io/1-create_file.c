#include "main.h"

/**
 *create_file- Creates a file
 *
 *@filename: File name
 *@text_content: Text to be written into file
 *
 *Return: 1 if successful else -1
 */

int create_file(const char *filename, char *text_content)
{
int fd, sz, s = 0;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd < 0)
{
return (-1);
}
if (text_content)
{
while (text_content[s])
{
s++;
}
sz = write(fd, text_content, s);
if (sz != s)
{
return (-1);
}
}
return (1);
}
