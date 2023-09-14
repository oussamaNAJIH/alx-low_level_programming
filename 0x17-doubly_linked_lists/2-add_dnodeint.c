#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @h: a dlistint_t list
 * @n: the data of the node to add
 * Return: returns the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
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
(*head)->prev = new_node;
new_node->next = *head;
*head = new_node;
return (new_node);
}