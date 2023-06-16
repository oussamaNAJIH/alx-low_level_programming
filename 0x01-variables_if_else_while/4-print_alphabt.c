#include <stdio.h>
/**
 * main - if and else
 * Return: returns 0 (Success)
*/
int main(void)
{
int i = 97;
while (i <= 122)
{
if (i == 101 || i == 113)
{
i++;
continue;
}
putchar(i);
i++;
}
putchar('\n');
return (0);
