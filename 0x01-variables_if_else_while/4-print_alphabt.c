#include <stdio.h>
/**
 * main - Displays the alphabet without q and e.
 * Return: return 0 (Success)
 */
int main(void)
{
for (int i = 97; i <= 122; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
return (0);
}
