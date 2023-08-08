#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

/**
 * exit_with_error - exite with error
 * @message: message to dispaly
 * @file: file's name
 * @code: code
 * Return: A pointer to the newly-allocated buffer.
 */
void exit_with_error(const char *message, const char *file, int code)
{
dprintf(STDERR_FILENO, message, file);
dprintf(STDERR_FILENO, "\n");
exit(code);
}


/**
 * main - checks the function
 * @argc: The number of arguments
 * @argv: list of arguments
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
if (argc != 3)
exit_with_error("Usage: cp file_from file_to", "", 97);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
exit_with_error("Error: Can't read from file %s", argv[1], 98);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
exit_with_error("Error: Can't write to file %s", argv[2], 99);

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
exit_with_error("Error: Can't write to file %s", argv[2], 99);
}
}

if (bytes_read == -1)
exit_with_error("Error: Can't read from file %s", argv[1], 98);

if (close(fd_from) == -1)
exit_with_error("Error: Can't close fd %d", "", 100);

if (close(fd_to) == -1)
exit_with_error("Error: Can't close fd %d", "", 100);

return (0);
}
