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
if (str == NULL)
{
return (NULL);
}
if (size == 0)
{
p = (char *)malloc(1);
return (p);
}
p = (char *)malloc(size + 1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = str[i];
}
p[sie] = '\0';
return (p);
free(p);
}
