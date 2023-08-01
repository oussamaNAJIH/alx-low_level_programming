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
listint_t *new_node;
listint_t *temp = *head;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL || head == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
temp = temp->next;
}
return (NULL);
}
