#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: return 0.
 */
int main(void)
{
long long number = 612852475143;
long long largestFactor = -1;
while (number % 2 == 0)
{
largestFactor = 2;
number = number / 2;
}
for (long long i = 3; i * i <= number; i += 2)
{
while (number % i == 0)
{
largestFactor = i;
number = number / i;
}
}
if (number > 2)
largestFactor = number;
printf("%lld\n", largestFactor);
return (0);
}
