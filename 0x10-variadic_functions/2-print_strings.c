#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings -  prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n:  number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;

va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
