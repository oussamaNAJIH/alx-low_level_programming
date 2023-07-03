#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the first string
 * @needle: the second string
 * Return: a pointer to the first occurence
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
while (*(haystack + i) != '\0')
{
int j = 0;
while (*(needle + j) != '\0')
{
if (*(haystack + i) == *(needle + j))
{
int x, y;
for (x = i, y = j; *(haystack + x) != '\0' && *(needle + y) != '\0'; x++, y++)
{
if (*(haystack + x) != *(needle + y))
{
break;
}
}
if (*(needle + y) == '\0')
{
return (haystack + i);
}
}
j++;
}
i++;
}
return (0);
}
