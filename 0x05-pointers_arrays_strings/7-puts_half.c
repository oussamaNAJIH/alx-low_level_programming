#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print the half of
 */

void puts_half(char *str)
{
int leng = 0;
int i;
int n;
while (str[leng] != '\0')
{
leng++;
}
if (leng % 2 != 0)
{
n = (leng - 1) / 2;
for (i = n + 1; i < leng; i++)
{
_putchar(str[i]);
}
}
else
{
n = leng / 2;
for (i = n; i < leng; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
