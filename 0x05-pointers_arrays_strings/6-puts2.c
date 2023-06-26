#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string
 */

void puts2(char *str)
{
int leng = 0;
int i;
while (str[leng] != '\0')
{
leng++;
}
for (i = 0; i <= leng - 1; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
