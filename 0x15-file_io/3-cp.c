#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

char *allocate_buff(char *file);
void c_file(int fd);

/**
 * allocate_buff - create a buffer
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buff(char *file)
{
char *buffer = malloc(sizeof(char) * BUFFER_SIZE);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * c_file - Closes file
 * @fd: The file descriptor
 */
void c_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - checks the function
 * @argc: The number of arguments
 * @argv: list of arguments
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = allocate_buff(argv[2]);
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
c_file(fd_from);
exit(99);
}
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
c_file(fd_from);
c_file(fd_to);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
c_file(fd_from);
c_file(fd_to);
exit(98);
}

free(buffer);
close(fd_from);
close(fd_to);
return (0);
}
