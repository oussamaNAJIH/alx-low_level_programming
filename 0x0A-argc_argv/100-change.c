#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
int numb, i, res;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
numb = atoi(argv[1]);
res = 0;
if (numb < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && numb >= 0; i++)
{
while (numb >= coins[i])
{
res++;
numb -= coins[i];
}
}
printf("%d\n", res);
return (0);
}
