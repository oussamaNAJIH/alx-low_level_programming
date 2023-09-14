#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end
 * @head: a dlistint_t list
 * @n: the data of the node to add
 * Return: returns the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *tmp;
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
tmp =  *head;
while (tmp != NULL)
{
tmp = tmp->next;
}
new_node->prev = tmp;
tmp->next = new_node;
return (*head);
}
