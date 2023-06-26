#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
int leng = _strlen(s);
int i;
for (i = leng - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
