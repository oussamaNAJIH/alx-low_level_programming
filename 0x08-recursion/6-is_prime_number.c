#include "main.h"



int help_is_prime_number(int n, int i);

/**
 * is_prime_number - check if the given number is  prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number otherwise return 0
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (help_is_prime_number(n, 2));
}

/**
 * help_is_prime_number - recursif function to check if the num if prime
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is a prime number otherwise return 0
 */

int help_is_prime_number(int n, int i)
{
if (i >= n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
else
{
return (help_is_prime_number(n, i + 1));
}
}
