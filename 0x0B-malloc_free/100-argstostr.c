#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer
 * @av: 2D array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i, j;
int x = 0;
int length = 0;
char *str;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
length++;
}
length += ac;
str = (char *)malloc(sizeof(char) * length + 1);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[x] = av[i][j];
x++;
}
if (str[x] == '\0')
{
str[x++] = '\n';
}
}
return (str);
}
