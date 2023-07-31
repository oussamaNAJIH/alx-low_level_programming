#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list_t list
 * @head: pointer to the head node
 */
void free_listint(listint_t *head)
{
listint_t *curr;
while (head != NULL)
{
curr = head;
head = head->next;
free(curr);
}
}
