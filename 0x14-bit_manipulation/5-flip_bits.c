#include "main.h"

/**
 * flip_bits - number of bits to flip to get from number to another.
 * @n: first number
 * @m: second one
 * Return: returns the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int result = 0;
while (xor)
{
result += xor & 1;
xor >>= 1;
}
return (result);
}
