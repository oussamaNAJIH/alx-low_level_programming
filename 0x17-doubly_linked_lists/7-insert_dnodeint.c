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
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to a pointer to the head of a dlistint_t list
 * @idx: the index at which to insert the new node
 * @n: the data of the new node
 * Return: returns the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *tmp = get_dnodeint_at_index(*h, idx - 1);
if (idx == 0)
{
add_dnodeint(h, n);
}
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
tmp = get_dnodeint_at_index(*h, idx - 1);
if (tmp == NULL)
{
free(new_node);
return (NULL);
}
new_node->prev = tmp;
new_node->next = tmp->next;
if (tmp->next != NULL)
{
tmp->next->prev = new_node;
}
tmp->next = new_node;
return (new_node);
}
