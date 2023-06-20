#include "main.h"
/**
 * print_alphabet_x10 - function displays alphabet in lower cases 10 times.
 */
void print_alphabet_x10(void)
{
int n;
int m = 0;
while (m <= 9)
{
for (n = 97; n <= 122; n++)
{
_putchar(n);
}
_putchar('\n');
m++;
}
}
