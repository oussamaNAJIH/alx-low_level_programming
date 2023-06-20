#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, j, m, x, y;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
m = i * j;
if (m > 9)
{
x = m % 10;
y = (m - x) / 10;
_putchar(44);
_putchar(32);
_putchar(y + '0');
_putchar(x + '0');
}
else
{
if (j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(m + '0');
}
}
_putchar('\n');
}
}
