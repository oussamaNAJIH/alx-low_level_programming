#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: returns the length
 */

int _strlen_recursion(char *s)
{
int leng;
if (*s)
{
leng = 1 + _strlen_recursion(s + 1);
}
return (leng);
}
