#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: nomber of char to concatenate
 * Return: Returns a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, j, size1 = 0, size2 = 0;
while (s1 != NULL && s1[size1] != '\0')
{
size1++;
}
while (s2 != NULL && s2[size2] != '\0')
{
size2++;
}
if (n >= size2)
{
p = (char *)malloc(size1 + size2 + 1);
}
else
{
size2 = n;
p = (char *)malloc(size1 + n + 1);
}
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
