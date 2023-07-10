#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: returns a pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
char *p;
int i, j;
int size1 = 0;
int size2 = 0;


while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}

if (s1 == NULL)
{
size1 = 0;
}
if (s2 == NULL)
{
size2 = 0;
}

p = (char *)malloc(size1 + size2 + 1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
p[i] = s1[i];
}
for (j = size1; j < (size1 + size2); j++)
{
p[j] = s2[j - size1];
}
p[size1 + size2] = '\0';
return (p);
}
