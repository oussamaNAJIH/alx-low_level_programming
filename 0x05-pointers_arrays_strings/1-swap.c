#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: adress of the first number
 * @b: adress of the second number
 */

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
