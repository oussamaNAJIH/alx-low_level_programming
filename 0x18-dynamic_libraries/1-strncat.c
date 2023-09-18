# include "main.h"
/**
 * _strncat -  concatenates two strings
 * @dest: the destination
 * @src: the source
 * @n: nombre of caracters to copy
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int leng = 0;
while (dest[leng] != '\0')
{
leng++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[leng + i] = src[i];
}
dest[leng + i] = '\0';
return (dest);
}
