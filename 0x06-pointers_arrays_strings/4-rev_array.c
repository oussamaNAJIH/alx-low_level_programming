# include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: the array to reverse
 * @n: the number of elements of the array
 * Return: returns 0 (succes)
 */

void reverse_array(int *a, int n)
{
int tmp;
int i, j;
if (n % 2 == 0)
{
for (i = 0, j = n - 1; i < (n / 2) && j >= (n / 2); i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
else
{
for (i = 0, j = n - 1; i < ((n - 1) / 2) && j >= ((n / 2)) + 1; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
}
