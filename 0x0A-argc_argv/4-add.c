#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted
 * Return: converted integer
 */
int _atoi(char *s)
{
int index, negative, number, prev_index;

index = 0;
negative = 0;
number = 0;
prev_index = 0;

while (*(s + index) != '\0')
{
if (*(s + index) == '-' && prev_index == 0)
{
negative++;
}
if (*(s + index) >= 48 && *(s + index) <= 57)
{
if (negative % 2 == 0)
{
number = number * 10 + (*(s + index) -48);
}
else
{
number = number * 10 - (*(s + index) -48);
}
prev_index = index;
}
if (prev_index != 0 && prev_index != index)
{
break;
}
index++;
}

return (number);
}


/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
int converted = _atoi(argv[i]);
if (converted == 0 && *argv[i] != '0')
{
printf("Error\n");
return (1);
}
sum += converted;
}
printf("%d\n", sum);
}
return (0);
}
