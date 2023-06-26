#include "main.h"

/**
 * print_array -  prints n elements of an array of integer
 * @a: the array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
int leng = 0;
int i;
while (a[leng] != '\0')
{
leng++;
}
for (i = 0; i < n; i++)
{
if (i != (n - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
