#include "main.h"


int leng_is_palindrome(char *s);
int help_int_is_palindrome(char *s, int n, int leng);


/**
 * is_palindrome - check if a string is palindrome
 * @s: string to evaluate
 * Return: 1 if n is a string is palindrome otherwise return 0
 */

int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (help_int_is_palindrome(s, 0, leng_is_palindrome(s)));
}

/**
 * leng_is_palindrome - calculate the length of a given string
 * @s: string to calculate the length of
 * Return: returns the length
 */

int leng_is_palindrome(char *s)
{
int leng = 0;
if (*s != '\0')
{
leng = 1 + leng_is_palindrome(s + 1);
}
return (leng);
}

/**
 * help_int_is_palindrome - checks the equality of char at index n and leng
 * @s: the string
 * @n: first index
 * @leng: second index
 * Return: returns 0 if they are not equal
 */
int help_int_is_palindrome(char *s, int n, int leng)
{
if (n > (leng / 2))
{
return (1);
}
if (s[n] != s[leng - 1])
{
return (0);
}
return (help_int_is_palindrome(s, n + 1, leng - 1));
}
