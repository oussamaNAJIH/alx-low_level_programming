#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head node
 */
void free_list(list_t *head)
{
while (head != NULL)
{
list_t *curr = head;
head = head->next;
free(curr->str);
free(curr);
}
}
