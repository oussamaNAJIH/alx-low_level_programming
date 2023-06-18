#include <stdio.h>
/**
 * main - Displays the alphabet without q and e.
 * Return: return 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
for (i = 48; i <= 56; i++)
{
for (j = 49; j <= 57; j++)
{
for (k = 49; k <= 57; k++)
{
if (j > i && k > j)
{
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56 || k != 57)
{
putchar(44);
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
