#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
int np;
if (n < 0)
{
np = -n;
_putchar(45);
}
else
{
np = n;
}
if ((np / 10) != 0)
{
print_number(np / 10);
}
_putchar((np % 10) + '0');
}
