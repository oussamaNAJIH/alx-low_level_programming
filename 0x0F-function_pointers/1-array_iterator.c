#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: the size of the array
 * @action:  pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
