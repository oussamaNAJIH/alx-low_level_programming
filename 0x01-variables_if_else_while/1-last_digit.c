#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - if and else
 * Return: returns 0 (Success)
*/
int main(void)
{
int n;
int md;
srand(time(0));
n = rand() - RAND_MAX / 2;
md = n % 10;
if (md > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, md);
else if (md == 0)
printf("Last digit of %d is %d and is 0\n", n, md);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, md);
return (0);
}
