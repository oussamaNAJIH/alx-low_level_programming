#include "main.h"
/**
 * _isalpha - checks if the argument is in an alpha or not.
 * @c : argument to be checked
 * Return: return 1 if the argument is an alpha and 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
