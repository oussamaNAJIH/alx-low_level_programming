#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string where we will search the character
 * @c: the character to search
 * Return: Returns a pointer to the first occurrence in the string s
 */

char *_strchr(char *s, char c)
{
int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
return (s + i);
}
i++;
}
s = NULL;
return (s);
}
