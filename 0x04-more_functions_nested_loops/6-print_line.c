# include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of underscores
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
putchar(95);
}
putchar('\n');
}
else
{
putchar('\n');
}
}
