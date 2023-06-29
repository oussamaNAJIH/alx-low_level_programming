# include "main.h"
/**
 * _strncpy -  copies a string
 * @dest: the destination
 * @src: the source
 * @n: nomber of caracters to copy from src
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int leng = 0;
while (src[leng] != '\0')
{
leng++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (i = leng; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
