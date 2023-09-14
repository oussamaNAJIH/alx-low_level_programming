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
 * delete_dnodeint_at_index -  deletes the node at index index
 * @head: a pointer to a pointer to the head of a dlistint_t list
 * @index: the index of the node to delete
 * Return: returns 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = get_dnodeint_at_index(*head, index);
if (tmp == NULL)
{
return (-1);
}
if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}
tmp->prev->next = tmp->next;
tmp->next->prev = tmp->prev;
free(tmp);
return (1);
}
