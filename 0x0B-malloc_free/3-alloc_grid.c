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

p = (int **) malloc(sizeof(int *) * height);
if (p == NULL)
{
free(p);
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = (int *)malloc(sizeof(int) * width);
if (p[i] == NULL)
{
for (; i >= 0; i--)
{
free(p[i]);
free(p);
}
return (NULL);
}
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
