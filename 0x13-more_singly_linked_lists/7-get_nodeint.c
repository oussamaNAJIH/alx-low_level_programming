#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting at 0
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
listint_t *tmp = head;
unsigned int count = 0;
while (tmp != NULL)
{
tmp = tmp->next;
count++;
if (count == index)
{
new_node->n = tmp->n;
new_node->next = tmp->next;
return (new_node);
}
}
return (NULL);
}
