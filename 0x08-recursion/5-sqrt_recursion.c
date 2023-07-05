#include "main.h"

int help_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: returns the square
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (help_sqrt_recursion(n, 0));
}

/**
 * help_sqrt_recursion - recursif function to find out the squar
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: returns the square
 */
int help_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
return (help_sqrt_recursion(n, i + 1));
}
