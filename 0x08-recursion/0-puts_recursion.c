#include "main.h"

/**
 * _puts_recursion - _puts_recursion
 * @s: pointer to the string to print out
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
