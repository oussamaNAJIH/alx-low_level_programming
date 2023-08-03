#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: integer
 * Return: the binary representation
 */

void print_binary(unsigned long int n)
{
int index;
int result = 0;
unsigned long int now;
for (index = 63; index >= 0; index--)
{
now = n >> index;
if (now & 1)
{
_putchar('1');
result++;
}
else if (result)
{
_putchar('0');
}
			}
if (!result)
_putchar('0');
}
