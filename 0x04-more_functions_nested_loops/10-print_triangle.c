# include "main.h"
/**
 * print_triangle -  prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = size - i; j <= size; j++)
{
for (k = 0; k < size - 1; k++)
{
_putchar(32);
}
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
