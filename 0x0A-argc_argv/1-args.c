#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
