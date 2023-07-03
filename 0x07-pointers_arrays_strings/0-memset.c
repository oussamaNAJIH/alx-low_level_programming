#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer that points the memory area that we intend to fill
 * @b: constant byte
 * @n: the number of bytes we want to fill
 * Return: returns pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
