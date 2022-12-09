#include "main.h"

/**
 *append_text_to_file- Appends text to file
 *
 *@filename: File name
 *@text_content: content to be appended
 *
 *Return: 1 if successfull else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, sz, count = 0;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
{
return (-1);
}

if (text_content)
{
while (text_content[count])
{
count++;
}
sz = write(fd, text_content, count);
if (sz < 0)
{
return (-1);
}
}
return (0);
}
