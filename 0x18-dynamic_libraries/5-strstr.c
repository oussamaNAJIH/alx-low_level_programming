#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the first string
 * @needle: the second string
 * Return: a pointer to the first occurence
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *p1 = haystack;
char *p2 = needle;
while (*p2 != '\0' && *p1 == *p2)
{
p1++;
p2++;
}
if (*p2 == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}
