#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add -  calculates summe of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub -  calculates difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul -  calculates multiplication of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div -  calculates division of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod -  calculates modulo of division of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
return (a % b);
}
