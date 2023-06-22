# include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of backslashs
 */

void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
j = 0;
while (j < i)
{
_putchar(32);
j++;
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
