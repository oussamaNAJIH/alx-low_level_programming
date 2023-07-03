#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the area where we wont to copy the data into
 * @src: the area where we wont to copy the data from
 * @n: the number of bytes to copy
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
