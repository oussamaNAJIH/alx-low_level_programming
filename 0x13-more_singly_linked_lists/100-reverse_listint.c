#include "lists.h"
#include <stdlib.h>


/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the list
 * Return: returns a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *prev, *next;
current = *head;
prev = NULL;
while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head = prev;
return (*head);
}
