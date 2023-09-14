#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: a dlistint_t list
 * Return: returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
tmp = tmp->next;
num++;
}
return (num);
}
