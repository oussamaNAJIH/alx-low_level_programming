#include <stdio.h>
/**
 * main - Displays the alphabet without q and e.
 * Return: return 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i <= 56; i++)
{
for (j = 49; j <= 57; j++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
