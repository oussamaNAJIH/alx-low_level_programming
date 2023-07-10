#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of lines
 * Return: returns a pointer
 */

int **alloc_grid(int width, int height)
{
int **p;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

p = (int **)malloc(height * 4);

if (p == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = (int *)malloc((width * 4) + 1);
if (p[i] == NULL)
{
return (NULL);
}
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
p[i][width]='\0';
}
return (p);
}
