#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * _exit_message - exit the program with an error message
 * @code: exit code
 * @message: exit message to print
 * Return: returns code
 */
void exit_message(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}


/**
 * main - check the code
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char *buffer;
if (argc != 3)
exit_message(97, "Usage: cp file_from file_to");

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
exit_message(98, "Error: Can't read from file");

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
exit_message(99, "Error: Can't write to file");

buffer = malloc(sizeof(char) * BUFFER_SIZE);
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
exit_message(99, "Error: Can't write to file");
}
}
if (bytes_read == -1)
exit_message(98, "Error: Can't read from file");

if (close(fd_from) == -1)
exit_message(100, "Error: Can't close fd");

if (close(fd_to) == -1)
exit_message(100, "Error: Can't close fd");

return (0);
}
