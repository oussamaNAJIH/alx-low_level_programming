#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array that we're attending to calculate the sum of diagonals of
 * @size: size of each 1d array of a
 */

void print_diagsums(int *a, int size)
{
int i;
int j;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i + size * i];
}
for (j = size - 1; j >= 0; j--)
{
sum2 += a[j * size + (size - j - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
