#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
int leng = 0;
int i, j;
char tmp;
j = 0;
while (s[leng] != '\0')
{
leng++;
}
for (i = 0, j = leng - 1; i < j; i++, j--)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}
}
