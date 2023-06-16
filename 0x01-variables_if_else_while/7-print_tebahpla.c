#include <stdio.h>
/**
 * main - Displays the alphabet without q and e.
 * Return: return 0 (Success)
 */
int main(void)
{
int i;
for (i = 90; i >= 65; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
