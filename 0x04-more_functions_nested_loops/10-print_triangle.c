# include <stdio.h>
/**
 * print_triangle -  prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
putchar(32);
}
for (k = 1; k <= i; k++)
{
putchar(35);
}
putchar('\n');
}
}
else
{
putchar('\n');
}
}
