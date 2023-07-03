#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the input string
 * Return: Returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int i = 0;
int j;

while (*(s + i) != '\0')
{
j = 0;
while (*(accept + j) != '\0')
{
if (*(s + i) == *(accept + j))
{
n++;
break;
}
j++;
}
if (*(accept + j) == '\0')
{
break;
}
i++;
}

return (n);
}
