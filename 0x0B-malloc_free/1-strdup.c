#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the string given as a parameter in heap
 * @str: the string to be copied
 * Return: returns a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
char *p;
int i;
int size = 0;
while (str[size] != '\0')
{
size++;
}

if (size == 0)
{
return (NULL);
}
p = (char *)malloc(size);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = str[i];
}
return (p);
}
