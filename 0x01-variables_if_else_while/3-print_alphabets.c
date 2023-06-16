#include <stdio.h>
#include <string.h>
/**
 * main - if and else
 * Return: returns 0 (Success)
*/
int main(void)
{
char Al[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n = strlen(Al);
for (int i = 0; i < n; i++)
{
putchar(Al[i]);
}
putchar('\n');
return (0);
}
