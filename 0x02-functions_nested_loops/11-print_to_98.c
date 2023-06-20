#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from @n to 98
 * @n: the first number in our numbers to reach 98
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i == 98)
{
printf("%d", i);
printf("\n");
break;
}
else
{
printf("%d, ", i);
}
}
}
else
{
for (i = n; i >= 98; i--)
{
if (i == 98)
{
printf("%d", i);
printf("\n");
break;
}
else
{
printf("%d, ", i);
}
}
}
printf("\n");
}
