#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the new node
 * @n: the data of the new node
 * Return: returns the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *tmp = *head;
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
new_node->n = n;
if (new_node == NULL)
{
return (NULL);
}
if (*head == NULL || idx == 0)
{
new_node->next = *head;
*head = new_node;
}
else
{
for (i = 0; i < idx - 1 && tmp != NULL; i++)
{
tmp = tmp->next;
}
if (tmp == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = tmp->next;
tmp->next = new_node;
}
return (new_node);
}
