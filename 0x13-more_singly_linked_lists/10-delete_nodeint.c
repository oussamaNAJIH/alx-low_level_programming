#include "lists.h"
#include <stdlib.h>


/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: returns 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *tmp = *head;
listint_t *tmp1;
if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}
for (i = 0; tmp && i < index; i++)
{
if (i == index - 1)
{
tmp1 = tmp->next;
tmp->next = tmp1->next;
free(tmp1);
return (1);
}
tmp = tmp->next;
}
return (-1);
}
