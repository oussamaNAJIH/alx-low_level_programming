#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the first element of the array
 * @max: the last element of the array
 * Return: Returns the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int i;
int *p;
if (min > max)
{
return (NULL);
}
int size = max - min + 1;
p = malloc(sizeof(int) * size);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i <size; i++)
{
p[i] = i + min;
}
return (p);
}
