#include "main.h"
/**
 * _islower - checks if the argument 'c' is in lowercase or not.
 * @c : the argument to be checked
 * Return: return 1 if the argument is lower case and 0 otherwise
 */
int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
