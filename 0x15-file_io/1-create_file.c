#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: returns 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd;
int size = 0;
char *p;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
p = text_content;
while (*p != '\0')
{
size++;
p++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
}
if (write(fd, text_content, size) == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
