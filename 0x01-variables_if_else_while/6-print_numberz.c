#include <stdio.h>
/**
 * main - Displays the alphabet without q and e.
 * Return: return 0 (Success)
 */
int main(void)
{
int i;
for (int i = 48; i <= 57; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
