#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to return the length of
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
int compt = 0;
int i = 0;
while (s[i] != '\0')
{
compt++;
i++;
}
return (compt);
}

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: the file's name
 * @text_content: NULL terminated string to add at the end of the file
 * Return: returns 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written;
int size = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
size = _strlen(text_content);
}
fd = open(filename, O_RDWR | O_APPEND, 0600);
bytes_written = write(fd, text_content, size);
if (fd == -1 || bytes_written == -1)
{
return (-1);
}
close(fd);
return (1);
}
