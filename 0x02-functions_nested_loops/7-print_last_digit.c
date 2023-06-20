#include "main.h"
/**
 * print_last_digit - calculate the argument % 10
 * @n: number that on intend to print the last digit of
 * Return: return the modulo
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
putchar(last_digit + '0');
return (last_digit);
}
