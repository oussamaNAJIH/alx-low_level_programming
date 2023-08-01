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
listint_t *tmp = head;
unsigned int count = 0;
while (tmp != NULL)
{
if (count == index)
{
return (tmp);
}
tmp = tmp->next;
count++;
}
return (NULL);
}
