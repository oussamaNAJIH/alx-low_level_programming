#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: integer
 * @index: the index
 * Return: returns the value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
int result;
if (index > 63)
{
return (-1);
}
result = (n >> index) & 1;
retrun (result);
}
