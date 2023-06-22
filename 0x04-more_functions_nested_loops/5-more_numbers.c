# include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14 , 10 times
 */

void more_numbers(void)
{
int j = 0;
int i;
int mod;
while (j < 10)
{
for (i = 0; i <= 14; i++)
{
mod = i % 10;
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar(mod + '0');
}
j++;
_putchar('\n');
}
}
