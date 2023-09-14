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
unsigned int i = 0;
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


/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: a dlistint_t list
 * @idx: the data of the node to add
 * @n: data of the node to add
 * Return: returns the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = get_dnodeint_at_index(*h, idx);
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
new_node->n = n;
if (new_node == NULL || tmp == NULL)
{
return (NULL);
}
new_node->prev = tmp->prev;
new_node->next = tmp;
tmp->prev = new_node;
return (*h);
}
