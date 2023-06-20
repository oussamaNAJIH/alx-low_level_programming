#include "main.h"
/**
 * print_sign - checks if the sign of number.
 * @n: the argement to be checked
 * Return: return 1 the number if positif, 0 if it's null and -1 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
