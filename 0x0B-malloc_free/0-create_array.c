#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the char taht the array is initialized with
 * Return: Returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
int i;
char *p;
if (size == 0)
{
return (0);
}

else
{
p = (char *)malloc(size);
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
}
