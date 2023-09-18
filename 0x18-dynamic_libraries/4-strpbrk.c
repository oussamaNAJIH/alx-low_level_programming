#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string where we search the first occurence
 * @accept: the intput string
 * Return: Returns a pointer to the byte found
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
while (*(s + i) != '\0')
{
int j = 0;
while (*(accept + j) != '\0')
{
if (*(s + i) == *(accept + j))
{
return (s + i);
break;
}
j++;
}
i++;
}
return (0);
}
