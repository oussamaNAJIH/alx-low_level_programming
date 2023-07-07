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
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: returns 0 (Success)
 */
int main(int argc, char *argv[])
{
int num1, num2, mul;
if (argc == 3)
{
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
mul = (num1)*(num2);
printf("%d\n", mul);
}
else
{
printf("Error\n");
}
return (0);
}
