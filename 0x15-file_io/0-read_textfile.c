#include "main.h"

/**
 * ssize_t read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file's name to be readen
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
size_t fd;
size_t bytes_read;
size_t bytes_written;
int size;
char *buffer;
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
size = sizeof(char) * letters;
buffer = malloc(size);
bytes_read = read(fd, buffer, size);
if (bytes_read < 0)
{
return (0);
}
bytes_written = write(STDIN_FILENO, buffer, bytes_read);
if (bytes_written < 0)
{
return (0);
}
close (fd);
return (bytes_written);
}
