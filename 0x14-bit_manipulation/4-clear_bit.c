#include "main.h"

/**
 * set_bit - sets the value of a bit to 0 at a given index
 * @n: integer
 * @index: the index
 * Return: returns 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int m;
if (index > 63)
{
return (-1);
}
m = ~m;
*n &= m;	
return (1);
}
