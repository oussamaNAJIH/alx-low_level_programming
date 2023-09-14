#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: a dlistint_t list
 * Return: returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
int num = 0;
const dlistint_t *tmp;
if (h == NULL)
{
return (0);
}
tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
num++;
}
return (num);
}
