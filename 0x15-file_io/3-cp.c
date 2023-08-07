#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void exit_message(int code, const char *message);
char *create_buffer(char *file);
void close_fd(int fd);
/**
 * exit_message - exit the program with an error message
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
 * create_buffer - Allocates a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *buffer = malloc(BUFFER_SIZE);
if (buffer == NULL)
exit_message(99, "Error: Can't write to file");

return (buffer);
}

/**
 * close_fd - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
int result = close(fd);
if (result == -1)
exit_message(100, "Error: Can't close fd");
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

buffer = create_buffer(argv[2]);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
free(buffer);
close_fd(fd_from);
exit_message(99, "Error: Can't write to file");
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
free(buffer);
close_fd(fd_from);
close_fd(fd_to);
exit_message(99, "Error: Can't write to file");
}
}

if (bytes_read == -1)
exit_message(98, "Error: Can't read from file");

free(buffer);
close_fd(fd_from);
close_fd(fd_to);

return (0);
}
