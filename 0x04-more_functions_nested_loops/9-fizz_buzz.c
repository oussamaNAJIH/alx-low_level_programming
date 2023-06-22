# include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz instead of the number
 * Return: returns 0 (Success)
 */
int main(void)
{
int i, mod;
for (i = 1; i <= 99; i++)
{
if (i % 3 == 0)
{
putchar(70);
putchar(105);
putchar(122);
putchar(122);
}
else if (i % 5 == 0)
{
putchar(66);
putchar(117);
putchar(122);
putchar(122);
}
else
{
if (i > 9)
{
mod = i % 10;
putchar((i / 10) + '0');
putchar(mod + '0');
}
else
{
putchar(i + '0');
}
}
putchar(32);
}
putchar(66);
putchar(117);
putchar(122);
putchar(122);
putchar('\n');
return (0);
}
