#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: return 0.
 */
int main(void)
{
long number = 612852475143;
long largest = -1;
int i;
while (number % 2 == 0)
{
largest = 2;
number = number / 2;
}
for (i = 3; i * i <= number; i += 2)
{
while (number % i == 0)
{
largest = i;
number = number / i;
}
}
if (number > 2)
largest = number;
printf("%ld\n", largest);
return (0);
}
