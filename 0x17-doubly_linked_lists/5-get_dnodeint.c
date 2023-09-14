#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: a dlistint_t list
 * @index: the index of the node
 * Return: returns the data of the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp = head;
unsigned i = 0;
while (tmp != NULL)
{
if (i == index)
{
return (tmp);
}
tmp = tmp->next;
i++;
}
return (NULL);
}
