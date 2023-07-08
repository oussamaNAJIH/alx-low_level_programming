#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* checking_num - check - string there are digit
* @str: array str
*
* Return: return 0 (Success)
*/
int checking_num(char *str)
{
unsigned int count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}


/**
* main - adds positive numbers
* @argc: number of command line arguments
* @argv: array of command line arguments
* Return: return 0 (Success)
*/
int main(int argc, char *argv[])
{
int count;
int converted;
int sum = 0;
count = 1;
while (count < argc)
{
if (checking_num(argv[count]))
{
converted = atoi(argv[count]);
sum += converted;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}

